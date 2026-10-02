#include <stdio.h>
#include <string.h>

int main()
{
    char words[3][100];
    int i, j;

    printf("Enter 3 words:\n");

    for (i = 0; i < 3; i++)
    {
        scanf("%s", words[i]);
    }

    int length = strlen(words[0]);

    for (i = 1; i < 3; i++)
    {
        if (strlen(words[i]) < length)
        {
            length = strlen(words[i]);
        }
    }

    for (i = 0; i < length; i++)
    {
        for (j = 1; j < 3; j++)
        {
            if (words[0][i] != words[j][i])
            {
                words[0][i] = '\0';
                printf("Longest Common Prefix: %s\n", words[0]);
                return 0;
            }
        }
    }

    printf("Longest Common Prefix: %s\n", words[0]);

    return 0;
}