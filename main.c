#include <stdio.h>
#define NUM_QUESTIONS 3

typedef struct
{
    char question[256];
    char options[4][128];
    char correct_option;
} QuizQuestion;

int main()
{
    QuizQuestion quiz[NUM_QUESTIONS] = {
        {"What is the capital of France?",
         {"A. Paris", "B. Berlin", "C. Rome", "D. London"},
         'A'},
        {"Which is the largest planet in our solar system?",
         {"A. Earth", "B. Jupiter", "C. Saturn", "D. Mars"},
         'B'},
        {"Which language is used for Android app development?",
         {"A. Swift", "B. Python", "C. Java", "D. Ruby"},
         'C'}};

    int score = 0;
    char answer;

    printf("Welcome to the Quiz Game!\n\n");

    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        printf("%d. %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++)
        {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer >= 'a' && answer <= 'z')
        {
            answer -= 32; // Convert to uppercase
        }

        if (answer == quiz[i].correct_option)
        {
            printf("Correct!\n\n");
            score++;
        }
        else
        {
            printf("Wrong! The correct answer is %c.\n\n", quiz[i].correct_option);
        }
    }

    printf("Quiz over! Your final score is: %d/%d\n", score, NUM_QUESTIONS);

    return 0;
}