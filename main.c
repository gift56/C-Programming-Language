#include <stdio.h>

int main()
{

    // Read A File
    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    printf("File was Read successfully\n");

    fclose(pFile);

    return 0;
}