using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public Question[] questions;
    private static List<Question> unansweredQuestions;

    private Question currentQuestion;
    [SerializeField]
    private GameObject gameObjectMuteAudio;
    [SerializeField] private Text factText;
    [SerializeField] private Text trueAnswerText;
    [SerializeField] private Text falseAnswerText;
    [SerializeField] private Text questionText;
    private int questionNumber;
    [SerializeField] private Animator animator;
    [SerializeField] private float timeBetweenQuestions = 0.00000002f;

    [SerializeField] GameObject VictoryGame;

    public AudioSource clickButton;

    [SerializeField] private Text trueGameVictoryText;
    [SerializeField] private Text falseGameVictoryText;
    [SerializeField] private Text monetizationGameVictoryText;

    private int trueGameVictoryNumber;
    private int falseGameVictoryNumber;

    public GameObject TrueButton;
    public GameObject FalseButton;

    [SerializeField] GameObject nextSceneButtonActive;
    private void Start()
    {
        questionNumber = PlayerPrefs.GetInt("QuestionNumber");
        trueGameVictoryNumber = PlayerPrefs.GetInt("TrueAnswers");
        falseGameVictoryNumber = PlayerPrefs.GetInt("FalseAnswers");
        trueGameVictoryText.text = "Количество верных ответов: " + PlayerPrefs.GetInt("TrueAnswers");
        falseGameVictoryText.text = "Количество неверных ответов: " + PlayerPrefs.GetInt("FalseAnswers");
        questionNumber += 1;
        if (trueGameVictoryNumber == questions.Length)
        {
            monetizationGameVictoryText.text = "Вы ответили на все вопросы верно! Молодчина!";
        }
        else
        {
            monetizationGameVictoryText.text = "Не расстраивайся! Повезёт в следующий раз";
        }
        PlayerPrefs.SetInt("QuestionNumber", questionNumber);
        questionText.text = "Вопрос " + PlayerPrefs.GetInt("QuestionNumber") + " из " + questions.Length;
        if (PlayerPrefs.GetInt("QuestionNumber") == questions.Length + 1)
        {
            VictoryGame.SetActive(true);
        }
        if (unansweredQuestions == null || unansweredQuestions.Count == 0)
        {
            unansweredQuestions = questions.ToList<Question>();
        }

        SetCurrentQuestion();
    }
    private void SetCurrentQuestion()
    {
        int randomQuestionIndex = Random.Range(0, unansweredQuestions.Count);
        currentQuestion = unansweredQuestions[randomQuestionIndex];

        factText.text = currentQuestion.fact;
        if (currentQuestion.isTrue)
        {
            trueAnswerText.text = "Верно";
            falseAnswerText.text = "Неверно";
        }
        else
        {
            trueAnswerText.text = "Неверно";
            falseAnswerText.text = "Верно";
        }
    }
    IEnumerator TransitionToNextQuestion()
    {
        unansweredQuestions.Remove(currentQuestion);
        nextSceneButtonActive.SetActive(true);
        yield return new WaitForSeconds(timeBetweenQuestions);
        
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);


    }
    public void UserSelectTrue()
    {
        animator.SetTrigger("True");
        if (PlayerPrefs.GetInt("Mute") == 0)
        {
            clickButton.Play();
        }
        

        if (currentQuestion.isTrue)
        {
            trueGameVictoryNumber += 1;
            PlayerPrefs.SetInt("TrueAnswers", trueGameVictoryNumber);
            TrueButton.GetComponent<Button>().enabled =false;
            FalseButton.GetComponent<Button>().enabled = false;
        }
        else
        {
            falseGameVictoryNumber += 1;
            PlayerPrefs.SetInt("FalseAnswers", falseGameVictoryNumber);
            TrueButton.GetComponent<Button>().enabled = false;
            FalseButton.GetComponent<Button>().enabled = false;
        }
        StartCoroutine(TransitionToNextQuestion());
    }
    public void UserSelectFalse()
    {
        animator.SetTrigger("False");
        if (PlayerPrefs.GetInt("Mute") == 0)
        {
            clickButton.Play();
        }

        if (!currentQuestion.isTrue)
        {
            trueGameVictoryNumber += 1;
            PlayerPrefs.SetInt("TrueAnswers", trueGameVictoryNumber);
            TrueButton.GetComponent<Button>().enabled = false;
            FalseButton.GetComponent<Button>().enabled = false;
        }
        else
        {
            falseGameVictoryNumber += 1;
            PlayerPrefs.SetInt("FalseAnswers", falseGameVictoryNumber);
            TrueButton.GetComponent<Button>().enabled = false;
            FalseButton.GetComponent<Button>().enabled = false;

        }
        StartCoroutine(TransitionToNextQuestion());
    }

}
