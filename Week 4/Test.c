#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#define CLEAR "cls"
#define SLEEP(ms) Sleep(ms)
#else
#include <unistd.h>
#define CLEAR "clear"
#define SLEEP(ms) usleep(ms * 1000)
#endif

#define WIDTH 20
#define HEIGHT 15

int main()
{
    int x = WIDTH / 2;   // horizontal position
    int y;

    char input;

    while (1)
    {
        for (y = 0; y < HEIGHT; y++)
        {
            system(CLEAR);

            // Draw screen
            for (int row = 0; row < HEIGHT; row++)
            {
                for (int col = 0; col < WIDTH; col++)
                {
                    if (row == y && col == x)
                        printf("[]");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            // Small delay
            SLEEP(200);

            // Check for input
            if (kbhit())  // Windows only (see note below)
            {
                input = getchar();

                if (input == 'a' && x > 0)
                    x--;
                else if (input == 'd' && x < WIDTH - 1)
                    x++;
                else if (input == 'q')
                    return 0;
            }
        }
    }

    return 0;
}
