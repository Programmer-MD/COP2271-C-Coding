#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Character : %c\n", ch);
    printf("ASCII     : %d\n", ch);

    return 0;
}