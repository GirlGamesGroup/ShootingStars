using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;

public class InputManager : MonoBehaviour {

    public static InputManager Instance;
    public const short SHOT_ENDED = 100;
    public const short RECEIVE_SCORE = 200;
    private bool connected = false;

    bool isShooting = false;

    string playerIp;

    [SerializeField]
    Text whereTheIpGoes;

    CrossPlatformInputManager.VirtualAxis VAHorizontal;

    CrossPlatformInputManager.VirtualAxis VAVertical;

    NetworkClient theClient;

    string horizontalName = "Horizontal";

    string verticalName = "Vertical";

    void OnGUI()
    {
        playerIp = Network.player.ipAddress;
        if(whereTheIpGoes != null )whereTheIpGoes.text = playerIp;
    }
    private void Awake()
    {
        Instance = this;
    }
    // Use this for initialization
    void Start () {

        VAHorizontal = new CrossPlatformInputManager.VirtualAxis(horizontalName);
        CrossPlatformInputManager.RegisterVirtualAxis(VAHorizontal);
        VAVertical = new CrossPlatformInputManager.VirtualAxis(verticalName);
        CrossPlatformInputManager.RegisterVirtualAxis(VAVertical);
        NetworkServer.Listen(25000);
        NetworkServer.RegisterHandler(888, ServerReceiveMessage);
        NetworkServer.RegisterHandler(999, ServerReceiveRetry);
    }

    void Init(NetworkClient client)
    {
        theClient = client;
    }

    private void ServerReceiveMessage(NetworkMessage message)
    {
        StringMessage msg = new StringMessage();
        msg.value = message.ReadMessage<StringMessage>().value;

        string[] deltas = msg.value.Split('|');
        float y = float.Parse(deltas[0]);
        float x = float.Parse(deltas[1]);
        float accelerationPhone = float.Parse(deltas[2]);
        float anglePhone = Mathf.Rad2Deg * Mathf.Atan(y / x);
        if (anglePhone < 0)
        {
            float dif = (90 + anglePhone);
            anglePhone = 90 + dif;
        }
        //VAHorizontal.Update(accelerationPhone);
        //VAVertical.Update(anglePhone);
        Shoot(accelerationPhone, anglePhone);
    }

    private void ServerReceiveRetry(NetworkMessage message)
    {
        StringMessage msg = new StringMessage();
        msg.value = message.ReadMessage<StringMessage>().value;

        //TODO: Haz lo que tengas que hacer para reiniciar la escena :v
    }
    // Update is called once per frame
    void Update () {
        if (NetworkServer.connections.Count >1 && !connected)
        {
            connected = true;
            GameManager.Instance.StartGame("Level");
        }
    }

    void Shoot(float acc, float angle)
    {
        BalloonManager.Instance.Shoot(acc,angle);
        //SendProjectileInfo(acc + " - " + angle);
    }

    public void SendProjectileInfo(string message)
    {
        if (NetworkServer.connections.Count > 0)
        {
            Debug.Log("Hablale al cliente");
            StringMessage msg = new StringMessage();
            msg.value = message;
            NetworkServer.SendToClient(1, SHOT_ENDED, msg);
        }
    }

    public void SendScores(float score, float highscore)
    {
        if (NetworkServer.connections.Count > 0)
        {
            StringMessage msg = new StringMessage();
            msg.value = score + "-" + highscore;
            NetworkServer.SendToClient(1, RECEIVE_SCORE, msg);
        }
    }
}
