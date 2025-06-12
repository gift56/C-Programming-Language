#include <stdio.h>

int main()
{

    // Write A File

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "I love coding in C!\n";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    fprintf(pFile, "%s", text);
    printf("File was written successfully\n");

    fclose(pFile);

    return 0;
}