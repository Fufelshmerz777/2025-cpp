#include <stdio.h>

int main()
{
    char s1[1001];
    char s2[1001];

    fgets(s1, 1001, stdin);
    fgets(s2, 1001, stdin);

    int i;
    i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            printf("no");
            return 0;
        }

        i = i + 1;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
