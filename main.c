#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    while (1)
    {
        // Get current time
        time_t rawtime;
        struct tm *timeinfo;
        char buffer[9]; // HH:MM:SS

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        // Format time as HH:MM:SS
        strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo);

        // Print time and flush stdout
        printf("\r%s", buffer);
        fflush(stdout);

        // Wait for 1 second
        Sleep(1000);
    }
    return 0;
}