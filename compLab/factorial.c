// prints factorial of a given number. bottom up method.
// max input 23

#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Prints factorial of given number. (max 23)\n\n");

    int n;
    printf("Input the number you want to find factorial of ");
    scanf("%d", &n);
    //int *arr = new int[n+1];
    //printf("%d", n);
    unsigned long long arr[25];
    arr[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        arr[i] = i * arr[i - 1];
    }
    printf("The factorial of %d is \n %llu", n, arr[n]);
    return 0;
}
/*
D:\Documents\Programming\online\moonwalking\compLab>gcc factorial.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NandeeeshGupta
Hi NandeeeshGupta. This program
Prints factorial of given number. (max 23)

Input the number you want to find factorial of 20
The factorial of 20 is
 2432902008176640000
D:\Documents\Programming\online\moonwalking\compLab>
*/