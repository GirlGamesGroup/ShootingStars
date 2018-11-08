using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.NetworkSystem;
using UnityEngine.UI;

public class NetworkClientUI : MonoBehaviour {

    public const short SHOT_ENDED = 100;

    public const short RECEIVE_SCORES = 200;

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

    [SerializeField]
    GameObject youWinButton;

    [SerializeField]
    Text playerScore;

    [SerializeField]
    Text highScore;

    bool readyToShoot = false;

    void OnGUI()
    {
        string ipAdress = Network.player.ipAddress;
    }

    void Start () {
        theClient = new NetworkClient();
        proyectile.SetActive(false);
        proyectilesToGo.SetActive(false);
        gameOverButton.SetActive(false);
        youWinButton.SetActive(false);
    }

    public void OnStartGame()
    {
        theClient.Connect(textFieldIp.text, 25000);
        theClient.RegisterHandler(SHOT_ENDED, OnShotEnded);
        theClient.RegisterHandler(RECEIVE_SCORES, OnReceiveScores);

    }

    public void OnResetGame()
    {
        connectButton.SetActive(false);
        textIp.SetActive(false);
        gameOverButton.SetActive(false);
        youWinButton.SetActive(false);
        proyectile.SetActive(true);
        proyectile.GetComponent<RainbowProjectile>().ResetSlingshot();
        proyectilesToGo.GetComponent<Text>().text = "x10";
        proyectilesToGo.SetActive(true);
        readyToShoot = true;
        OnRetry();
    }

    public void OnRetry()
    {
        if (theClient.isConnected)
        {
            StringMessage msg = new StringMessage();
            msg.value = "Pinche sol maría";
            theClient.Send(999, msg);
        }
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
        if (int.Parse(msg.value) == 0)
        {
            gameOverButton.SetActive(true);
            proyectile.SetActive(false);
            proyectilesToGo.SetActive(false);
            readyToShoot = false;
        }
        else if (int.Parse(msg.value) == 12)
        {
            youWinButton.SetActive(true);
            proyectile.SetActive(false);
            proyectilesToGo.SetActive(false);
            readyToShoot = false;
        }
        else
        {
            proyectilesToGo.GetComponent<Text>().text = "x" + msg.value;
            proyectile.GetComponent<RainbowProjectile>().ResetSlingshot();
        }
    }

    private void OnReceiveScores(NetworkMessage message)
    {
        StringMessage msg = new StringMessage();
        msg.value = message.ReadMessage<StringMessage>().value;
        string[] scores = msg.value.Split('-');
        playerScore.text = "Score: " + scores[0];
        highScore.text = "High Score: " + scores[1];
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
