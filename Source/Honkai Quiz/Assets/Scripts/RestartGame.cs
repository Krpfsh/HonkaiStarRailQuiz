using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RestartGame : MonoBehaviour
{
    public int sceneNumber;
    public void Restart()
    {
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene(sceneNumber);
    }
}
