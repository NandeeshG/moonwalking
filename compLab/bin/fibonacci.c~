// print fibonacci series till m using recursion
// 1 1 2 3 5 8 13 21 34 ...
// 1 2 3 4 5 6 7  8  9

#include <stdio.h>

int fibonacci(int m) //, int print[1000], int size)
{
    // 4
    // 3               2
    // 2    1          1    0
    // 1 0

    if (m <= 0)
        return 0;
    else if (m == 1)
        return 1;
    else
    {
        return fibonacci(m - 1) + fibonacci(m - 2);
    }
}

int main()
{
    int m;
    printf("Enter till which term to print fibonacci series ");
    scanf("%d", &m);

    for (int i = 1; i <= m; ++i)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}