using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.UI;

public class InputManager : MonoBehaviour {

    public const short SHOT_ENDED = 100;

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
        whereTheIpGoes.text = playerIp;
    }
    // Use this for initialization
    void Start () {

        VAHorizontal = new CrossPlatformInputManager.VirtualAxis(horizontalName);
        CrossPlatformInputManager.RegisterVirtualAxis(VAHorizontal);
        VAVertical = new CrossPlatformInputManager.VirtualAxis(verticalName);
        CrossPlatformInputManager.RegisterVirtualAxis(VAVertical);
        NetworkServer.Listen(25000);
        NetworkServer.RegisterHandler(888, ServerReceiveMessage);
	}

    void Init(NetworkClient client)
    {
        theClient = client;
    }
	
    private void ServerReceiveMessage( NetworkMessage message)
    {
        StringMessage msg = new StringMessage();
        msg.value = message.ReadMessage<StringMessage>().value;

        string[] deltas = msg.value.Split('|');
        float y = Convert.ToSingle(deltas[0]);
        float x = Convert.ToSingle(deltas[1]);
        float accelerationPhone = Convert.ToSingle(deltas[2]);
        float anglePhone = Mathf.Atan(y / x);
        //VAHorizontal.Update(accelerationPhone);
        //VAVertical.Update(anglePhone);
        Shoot(accelerationPhone, anglePhone);
    }
    // Update is called once per frame
    void Update () {

	}

    void Shoot(float acc, float angle)
    {
        Debug.Log(acc + " - " + angle);
        SendProjectileInfo(acc + " - " + angle);
    }

    static public void SendProjectileInfo(string message)
    {
        if (NetworkServer.connections.Count > 0)
        {
            StringMessage msg = new StringMessage();
            msg.value = message;
            NetworkServer.SendToClient(1, SHOT_ENDED, msg);
        }
    }
}
