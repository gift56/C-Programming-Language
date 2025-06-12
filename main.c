#include <stdio.h>
#include <windows.h> // For window only
// #include <unistd.h>  For Linux / Mac

int main()
{
    // FOR LOOPS

    for (int i = 10; i >= 0; i--)
    {
        Sleep(1000);
        printf("%d\n", i);
    }
    printf("Happy New year");

    return 0;
}