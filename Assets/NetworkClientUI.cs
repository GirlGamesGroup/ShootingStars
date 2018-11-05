using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
using UnityEngine.UI;

public class NetworkClientUI : MonoBehaviour {

    public const short SHOT_ENDED = 100;

    static NetworkClient theClient;

    [SerializeField]
    GameObject connectButton;

    [SerializeField]
    GameObject textIp;

    [SerializeField]
    Text textFieldIp;

    [SerializeField]
    GameObject proyectile;

    [SerializeField]
    GameObject proyectilesToGo;

    [SerializeField]
    GameObject gameOverButton;

    bool readyToShoot = false;

    void OnGUI()
    {
        //string ipAdress = Network.player.ipAddress;
    }
    // Use this for initialization
    void Start () {
        theClient = new NetworkClient();
        proyectile.SetActive(false);
        proyectilesToGo.SetActive(false);
        gameOverButton.SetActive(false);
	}

    public void OnStartGame()
    {
        theClient.Connect(textFieldIp.text, 25000);
        theClient.RegisterHandler(SHOT_ENDED, OnShotEnded);
    }

    public void OnResetGame()
    {
        connectButton.SetActive(false);
        textIp.SetActive(false);
        gameOverButton.SetActive(false);
        proyectile.SetActive(true);
        proyectile.GetComponent<RainbowProjectile>().ResetSlingshot();
        proyectilesToGo.GetComponent<Text>().text = "x10";
        proyectilesToGo.SetActive(true);
        readyToShoot = true;
    }

    // Update is called once per frame
    void Update () {
        if(theClient.isConnected && connectButton.activeInHierarchy)
        {
            connectButton.SetActive(false);
            textIp.SetActive(false);
            proyectile.SetActive(true);
            proyectile.GetComponent<RainbowProjectile>().ResetSlingshot();
            proyectilesToGo.SetActive(true);
            readyToShoot = true;
        }
        else if (!theClient.isConnected && !connectButton.activeInHierarchy)
        {
            connectButton.SetActive(true);
            textIp.SetActive(true);
            proyectile.SetActive(false);
            proyectilesToGo.SetActive(false);
            readyToShoot = false;
        }

    }

    private void OnShotEnded(NetworkMessage message)
    {
        StringMessage msg = new StringMessage();
        msg.value = message.ReadMessage<StringMessage>().value;

        //string[] deltas = msg.value.Split('|');
        if(float.Parse(msg.value) > 0)
        {
            Debug.Log(msg.value);
            proyectilesToGo.GetComponent<Text>().text = "x" + msg.value;
            proyectile.GetComponent<RainbowProjectile>().ResetSlingshot();
        }
        else
        {
            gameOverButton.SetActive(true);
            proyectile.SetActive(false);
            proyectilesToGo.SetActive(false);
            readyToShoot = false;
        }
    }

    static public void SendControllerInfo(Vector3 playersThrow)
    {
        if(theClient.isConnected)
        {
            StringMessage msg = new StringMessage();
            float acceleration = playersThrow.magnitude;
            msg.value =  playersThrow.y + "|" + playersThrow.x + "|" + acceleration;
            theClient.Send(888, msg);
        }
    }
}
