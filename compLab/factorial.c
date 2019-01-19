// prints factorial of a given number. bottom up method.
// max input 23

#include <stdio.h>
int main()
{
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