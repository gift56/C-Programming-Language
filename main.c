#include <stdio.h>
#include <string.h>

int main()
{

    int age = 0;
    float gpa = 0;
    char grade = '\0';
    char fullname[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your full name: ");
    // scanf("%c", &fullname);
    fgets(fullname, sizeof(fullname), stdin);
    fullname[strlen(fullname) - 1] = '\0';

    printf("%s\n", fullname);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    return 0;
}