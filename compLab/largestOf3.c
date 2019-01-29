#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("take 3 int as input and print the largest. Enter 3 numbers\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        if (b < c)
        {
            printf("Largest is %d", c);
        }
        else
        {
            printf("Largest is %d", b);
        }
    }
    else
    {
        if (a < c)
        {
            printf("Largest is %d", c);
        }
        else
        {
            printf("Largest is %d", a);
        }
    }
}

/* OUTPUT
D:\Documents\Programming\online\moonwalking\compLab>gcc largestOf3.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- Nandeeesh
Hi Nandeeesh. This program
take 3 int as input and print the largest. Enter 3 numbers
23 6 45
Largest is 45
*/