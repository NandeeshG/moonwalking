#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("converts all uppercase characters in the word to lowercase.\n");
    char str[21];
    printf("Enter the word upto 20 char long-\n");
    scanf("%s", &str);

    int len = 0;
    while (str[len] != '\0')
    {
        ++len;
    }

    for (int i = 0; i < len; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            int sub = 'a' - 'A';
            str[i] += sub;
        }
    }

    printf("\nThe converted word is-\n%s\n", str);

    return 0;
}

/*
D:\Documents\Programming\online\moonwalking\compLab>gcc upperTOlower.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- nandeeshh
Hi nandeeshh. This program
converts all uppercase characters in the word to lowercase.
Enter the word upto 20 char long-
helloTHERE987[]

The converted word is-
hellothere987[]
*/