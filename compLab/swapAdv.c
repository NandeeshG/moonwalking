#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Swaps two number without using third variable.\n Enter two numbers- ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a=%d and b=%d\n", a, b);
    printf("Swapping...\n");

    // (a)    (b)
    a = a - b; // a-b     b
    b = a + b; // a-b     a
    a = a - b; //  -b     a
    a *= -1;   //  b      a
    //swapped!

    printf("a=%d and b=%d\n", a, b);

    return 0;
}
/*

D:\Documents\Programming\online\moonwalking\compLab>gcc swapAdv.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- nandeesh
Hi nandeesh. This program
Swaps two number without using third variable.
 Enter two numbers- 34 12
a=34 and b=12
Swapping...
a=12 and b=34
*/