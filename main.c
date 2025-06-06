#include <stdio.h>
#include <stdbool.h>

int main()
{
    // How to declare a whole number variable
    int age = 21;
    printf("You are %d years old\n", age);

    // How to declare a decimal number variable
    float degree = -10.1;
    printf("The temperature outside is %.1f•F\n", degree);

    // How to declare a long decimal number variable
    double PI = 3.14159;
    printf("The Pi of a circle is %lf\n", PI);

    // How to declare a single character string variable
    char grade = 'A';
    printf("You gpa is %c\n", grade);

    // How to declare a multiple character string variable
    char name[] = "Efe Asiegwhu Gift";
    printf("Hello 👋, my name is %s\n", name);

    // How to declare a boolean variable it requires import of header file (#include <stdbool.h>)
    bool isOnline = true;

    return 0;
}