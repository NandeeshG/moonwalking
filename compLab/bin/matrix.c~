#include <stdio.h>
#include <stdlib.h>

void addition()
{
    printf("\n---ADDITION---(mat(A) + mat(B))---\n");
    printf("Enter rows and column of matrices - \n");
    int m, n, *a, *b;
    scanf("%d %d", &m, &n);

    a = (int *)malloc(n * m * sizeof(int));
    b = (int *)malloc(n * m * sizeof(int));

    printf("Input matrix A. Row wise\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", a + (i * n) + j);
        }
    }
    printf("Input matrix B. Row wise\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", b + (i * n) + j);
            *(b + (i * n) + j) += *(a + (i * n) + j);
        }
    }

    printf("A + B = \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", *(b + (i * n) + j));
        }
        printf("\n");
    }
    printf("-x-x-x-x-x-x-\n");

    free(a);
    free(b);

    return;
}

void subtraction()
{
    printf("\n---SUBTRACTION---(mat(A) - mat(B))---\n");
    printf("Enter rows and column of matrices - \n");
    int m, n, *a, *b;
    scanf("%d %d", &m, &n);

    a = (int *)malloc(n * m * sizeof(int));
    b = (int *)malloc(n * m * sizeof(int));

    printf("Input matrix A. Row wise\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", a + (i * n) + j);
        }
    }
    printf("Input matrix B. Row wise\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", b + (i * n) + j);
            *(a + (i * n) + j) -= *(b + (i * n) + j);
        }
    }

    printf("A - B = \n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", *(a + (i * n) + j));
        }
        printf("\n");
    }
    printf("-x-x-x-x-x-x-\n");

    free(a);
    free(b);

    return;
}

int main()
{
    int n;
    do
    {
        printf("Matrix Operations. Select one\n");
        printf("1 -> Addition\n");
        printf("2 -> Subtraction\n");
        printf("Any other number -> Exit\n");

        scanf("%d", &n);
        switch (n)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        }
    } while (n >= 1 && n <= 1);
    return 0;
}