#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Prints ASCII value of entered character \n\n");

    char c;
    printf("Enter the character- ");
    scanf("\n%c", &c);
    printf("Ascii value of %c is %d", c, c);

    return 0;
}