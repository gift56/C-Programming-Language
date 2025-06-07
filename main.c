#include <stdio.h>

int main()
{
    // IF ELSE CONDITION
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65)
    {
        printf("You're a senoir");
    }
    else if (age >= 18)
    {
        printf("You're a adult");
    }
    else if (age < 0)
    {
        printf("You're haven't been born yet");
    }
    else if (age == 0)
    {
        printf("You are a newborn");
    }
    else
    {
        printf("You are a child");
    }

    return 0;
}