#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("checks if the input number is even or odd. Enter a number-\n");
    int n;
    scanf("%d", &n);
    if (n & 1)
    {
        printf("ODD NUMBER!\n");
    }
    else
    {
        printf("EVEN NUMBER!\n");
    }

    return 0;
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc evenODD.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NANDEESH
Hi NANDEESH. This program
checks if the input number is even or odd. Enter a number-
49
ODD NUMBER!

D:\Documents\Programming\online\moonwalking\compLab>gcc evenODD.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NANDEESHH
Hi NANDEESHH. This program
checks if the input number is even or odd. Enter a number-
888
EVEN NUMBER!
*/