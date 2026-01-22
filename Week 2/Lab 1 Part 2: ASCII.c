#include <stdio.h>

int main(void) {
    char ch;
    char nextChar;
    char upper;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    printf("Character : %c\n", ch);
    printf("ASCII     : %d\n", ch);

    // TODO: compute the next character
    nextChar = ch + 1 ;

    // TODO: convert to uppercase using ASCII arithmetic
    upper = nextChar - 32 ;

    printf("Next char : %c\n", nextChar);
    printf("Uppercase : %c\n", upper);

    return 0;
}