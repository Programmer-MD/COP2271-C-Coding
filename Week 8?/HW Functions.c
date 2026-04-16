#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int moves = 0;

// Given Snakes and Ladders
int check_position(int pos)
{
    // Ladders
    if (pos == 3) return 22;
    if (pos == 5) return 8;
    if (pos == 11) return 26;
    if (pos == 20) return 29;
    if (pos == 27) return 56;
    if (pos == 36) return 44;
    if (pos == 51) return 67;
    if (pos == 71) return 92;
    if (pos == 80) return 99;

    // Snakes
    if (pos == 17) return 4;
    if (pos == 19) return 7;
    if (pos == 21) return 9;
    if (pos == 43) return 34;
    if (pos == 54) return 31;
    if (pos == 62) return 18;
    if (pos == 64) return 60;
    if (pos == 87) return 24;
    if (pos == 93) return 73;
    if (pos == 95) return 75;
    if (pos == 98) return 79;

    return pos;
}

// Recursive function
void play(int position)
{
    //  Base case
    if (position >= 100)
    {
        printf("\nReached 100 in %d moves!\n", moves);

        return;
    }

    // Dice Roll
    int dice = (rand() % 6) + 1;

    printf("\nRolled: %d", dice);

    // Makes sure it stops exactly at 100
    if (position + dice <= 100)
    {
        position += dice;
    }

    // Adds then moves to checking position for snake or ladder
    printf(" -> Moved to: %d", position);

    // Check snake or ladder
    int newPos = check_position(position);

    if (newPos > position)
    {
        printf(" (Ladder to %d)", newPos);
    }
    else if (newPos < position)
    {
        printf(" (Snake to %d)", newPos);
    }
    position = newPos;

    moves++;

    // Recursive call
    play(position);
}

int main()
{
    srand(time(NULL)); // Seed the random number generator

    play(1); // starting position

    return 0;
}