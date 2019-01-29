#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Swaps two number. Enter two numbers- ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a=%d and b=%d\n", a, b);
    printf("Swapping...\n");
    int temp = a;
    a = b;
    b = temp;

    printf("a=%d and b=%d\n", a, b);

    return 0;
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc swapSimple.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- nandeesh
Hi nandeesh. This program
Swaps two number. Enter two numbers- 34 129
a=34 and b=129
Swapping...
a=129 and b=34
*/