#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("checks if the input number is positive or negative. Enter a number-\n");
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("POSITIVE NUMBER!\n");
    }
    else if (n < 0)
    {
        printf("NEGATIVE NUMBER!\n");
    }
    else
    {
        printf("NUMBER IS 0\n");
    }

    return 0;
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc posNEG.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NandeeeshGupta
Hi NandeeeshGupta. This program
checks if the input number is positive or negative. Enter a number-
34
POSITIVE NUMBER!

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NG
Hi NG. This program
checks if the input number is positive or negative. Enter a number-
-12
NEGATIVE NUMBER!

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NG
Hi NG. This program
checks if the input number is positive or negative. Enter a number-
0
NUMBER IS 0
*/