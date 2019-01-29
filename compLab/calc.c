#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Inputs 2 numbers and allows to perform \nbasic mathematical operations on them.");
    printf("Enter 2 numbers- ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Choose an operator - (+) (-) (/) (*) \n Input the req operator. ");
    char oper;
    scanf("\n%c", &oper);

    switch (oper)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '/':
        printf("%d / %d = ", a, b);
        float ans, b2 = b, a2 = a;
        ans = a2 / b2;
        printf("%f\n", ans);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    default:
        printf("Sorry, wrong input!\n");
        break;
    }
    return 0;
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc calc.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- nandeesh
Hi nandeesh. This program
Inputs 2 numbers and allows to perform
basic mathematical operations on them.Enter 2 numbers- 5 9
Choose an operator - (+) (-) (/) (*)
 Input the req operator. +
5 + 9 = 14

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Inputs 2 numbers and allows to perform
basic mathematical operations on them.Enter 2 numbers- 15 4
Choose an operator - (+) (-) (/) (*)
 Input the req operator. -
15 - 4 = 11

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Inputs 2 numbers and allows to perform
basic mathematical operations on them.Enter 2 numbers- 9 10
Choose an operator - (+) (-) (/) (*)
 Input the req operator. *
9 * 10 = 90

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Inputs 2 numbers and allows to perform
basic mathematical operations on them.Enter 2 numbers- 10 3
Choose an operator - (+) (-) (/) (*)
 Input the req operator. /
10 / 3 = 3.333333

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- ng
Hi ng. This program
Inputs 2 numbers and allows to perform
basic mathematical operations on them.Enter 2 numbers- 49 7
Choose an operator - (+) (-) (/) (*)
 Input the req operator. /
49 / 7 = 7.000000

D:\Documents\Programming\online\moonwalking\compLab>
*/