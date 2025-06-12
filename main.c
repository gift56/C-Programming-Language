#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void happyBirthday(char name[], int age)
{
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

// FUNCTION WITH THE RETURN VALUE

int square(int num)
{
    return num * num;
}

bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
        return false;
}

int main()
{

    int x = square(2);
    int y = square(4);
    int z = square(6);

    printf("Value x is: %d\n", x);
    printf("Value y is: %d\n", y);
    printf("Value z is: %d\n", z);

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;
}