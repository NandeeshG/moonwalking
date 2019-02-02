#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("checks if the input sides make a right triangle or not.\n");
    printf("Input base, perpendicular and hypotenuse - ");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    long long c_sq = c * c;
    long long other_sq = (a * a) + (b * b);
    if (c_sq == other_sq)
    {
        printf("\nIt is a right triangle.\n");
    }
    else
    {
        printf("\nNot a right triangle.\n");
    }

    return 0;
}

/*
D:\Documents\Programming\online\moonwalking\compLab>gcc rightTriangle.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NandeeshGupta
Hi NandeeshGupta. This program
checks if the input sides make a right triangle or not.
Input base, perpendicular and hypotenuse - 3 4 5

It is a right triangle.

D:\Documents\Programming\online\moonwalking\compLab>a.exeEnter your name- NG
Hi NG. This program
checks if the input sides make a right triangle or not.
Input base, perpendicular and hypotenuse - 3 4 6

Not a right triangle.

D:\Documents\Programming\online\moonwalking\compLab>
*/