#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("converts all lowercase characters in the word to uppercase.\n");
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
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int sub = 'a' - 'A';
            str[i] -= sub;
        }
    }

    printf("\nThe converted word is-\n%s\n", str);

    return 0;
}

/*
D:\Documents\Programming\online\moonwalking\compLab>gcc lowerTOupper.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- NandeeshGupta
Hi NandeeshGupta. This program
converts all lowercase characters in the word to uppercase.
Enter the word upto 20 char long-
helloTHERE987[]

The converted word is-
HELLOTHERE987[]
*/