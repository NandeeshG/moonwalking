#include <stdio.h>
#define debugint(a) printf("\ndebugint- %d\n", a)
#define debugstr(a) printf("\ndebugstr- %s\n", a);
#define alphaX2 52
#define alphaX1 26
#define key_size 21
#define str_size 61
#define error_val -1
#define okay_val 0
#define pos_val 1

int isUnique(char keyword[key_size])
{
    int freq_table[alphaX2];
    for (int i = 0; i < alphaX2; ++i)
    {
        freq_table[i] = 0;
    }
    for (int i = 0; keyword[i] != '\0'; i++)
    {
        int index;
        if (keyword[i] >= 'a' && keyword[i] <= 'z')
        {
            index = keyword[i] - 'a';
        }
        else if (keyword[i] >= 'A' && keyword[i] <= 'Z')
        {
            index = keyword[i] - 'A' + alphaX1;
        }
        else
        {
            return error_val;
        }

        ++freq_table[index];
        if (freq_table[index] > 1)
        {
            return error_val;
        }
    }

    return okay_val;
}

void makeCrypto(char key[key_size], char crypto[alphaX2 + 1])
{
    char *key_pt = key;
    char *low_pt = crypto;
    char *upp_pt = crypto + 26;
    int freq_table[alphaX2];
    for (int i = 0; i < alphaX2; ++i)
    {
        freq_table[i] = okay_val;
    }

    while (*key_pt != '\0')
    {
        int freq_index;
        if (*key_pt >= 'a' && *key_pt <= 'z')
        {
            freq_index = (*key_pt) - 'a';
            freq_table[freq_index] = pos_val;
            *low_pt = *key_pt;
            ++low_pt;
            ++key_pt;
        }
        else if (*key_pt >= 'A' && *key_pt <= 'Z')
        {
            freq_index = (*key_pt) - 'A' + alphaX1;
            freq_table[freq_index] = pos_val;
            *upp_pt = *key_pt;
            ++upp_pt;
            ++key_pt;
        }
        else
        {
            printf("ERROR CAUGHT IN KEYWORD\n");
            return;
        }
    }

    for (char new_alpha = 'a'; low_pt < (crypto + alphaX1);)
    {
        int freq_index = new_alpha - 'a';
        if (freq_table[freq_index] == okay_val)
        {
            *low_pt = new_alpha;
            ++low_pt;
        }
        ++new_alpha;
    }

    for (char new_alpha = 'A'; upp_pt < (crypto + alphaX2);)
    {
        int freq_index = new_alpha - 'A' + alphaX1;
        if (freq_table[freq_index] == okay_val)
        {
            *upp_pt = new_alpha;
            ++upp_pt;
        }
        ++new_alpha;
    }

    crypto[alphaX2] = '\0';
    //debugstr(crypto);
    return;
}

void changeString(char crypto[alphaX2], char str[str_size])
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        int crypto_index;
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            crypto_index = str[i] - 'a';
            str[i] = crypto[crypto_index];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            crypto_index = str[i] - 'A' + alphaX1;
            str[i] = crypto[crypto_index];
        }
    }
    return;
}

int main()
{
    char name[20];
    printf("Enter your name- ");
    scanf("%s", &name);
    printf("Hi %s. This program\n", name);

    printf("Ciphers input string as per given keyword \n\n");

    char keyword[key_size];
    printf("Enter the keyword, all unique characters (max 20)- ");
    scanf("%s", &keyword);
    //debugint(isUnique(keyword));
    if (isUnique(keyword) == error_val)
    {
        printf("Keyword invalid!!\n Exiting...");
        return okay_val;
    }
    char string[str_size];
    printf("Enter the string (max 60)- ");
    scanf("\n");
    fgets(string, str_size, stdin);
    //debugstr(string);

    char crypto[alphaX2 + 1]; //0-alternate for a, 25-z, 26-A, 51-Z, 52-'\0'
    makeCrypto(keyword, crypto);
    //debugstr(keyword);
    //debugstr(crypto);

    changeString(crypto, string);

    printf("\nThe Encrypted string is -\n%s\n", string);

    return okay_val;
}

/*
D:\Documents\Programming\online\moonwalking\compLab>gcc cipher.c

D:\Documents\Programming\online\moonwalking\compLab>a.exe
Enter your name- Nandeesh
Hi Nandeesh. This program
Ciphers input string as per given keyword

Enter the keyword, all unique characters (max 20)- sEcRt
Enter the string (max 60)- hello world!!

The Encrypted string is -
fbjjm wmpja!!


D:\Documents\Programming\online\moonwalking\compLab>
*/