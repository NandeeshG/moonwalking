#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("checks if the input number is a palindrome or not. Input number\n");
    char str[101];
    scanf("%s", &str);

    int len = 0;
    while (str[len] != '\0' && ++len)
    {
    }

    for (int i = 0, j = len - 1; i <= j; ++i, --j)
    {
        if (str[i] != str[j])
        {
            printf("Not palindrome.\n");
            return 0;
        }
    }

    printf("It is palindrome.\n");
    return 0;
}

/*
D:\Documents\Programming\online\moonwalking\compLab>gcc palindrome.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- n
Hi n. This program
checks if the input number is a palindrome or not. Input number
765476674567
It is palindrome.

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- n
Hi n. This program
checks if the input number is a palindrome or not. Input number
7588765
Not palindrome.

D:\Documents\Programming\online\moonwalking\compLab>
*/