using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class MuteManager : MonoBehaviour
{
    public bool isMute =true;

    [SerializeField] SpriteRenderer muteImage;
    [SerializeField] Sprite OnMute;
    [SerializeField] Sprite OffMute;
    public void MuteButton()
    {
        isMute = !isMute;
        if (!isMute)
        {
            AudioListener.pause = isMute;
        }
        else{
            AudioListener.pause = isMute;
        };
        PlayerPrefs.SetInt("Mute", isMute ? 1 : 0);
    }
    private void Update()
    {
        isMute = PlayerPrefs.GetInt("Mute") == 1; // при удалении ключей здесь становиться 0 и поэтому в условии проверки нужно ставить !
        if (!isMute)
        {
            AudioListener.pause = isMute;
            muteImage.sprite = OffMute;
        }
        else
        {
            AudioListener.pause = isMute;
            muteImage.sprite = OnMute;
        }
    }
}
