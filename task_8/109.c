#include <stdio.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int i;
    int j;

    for (i = 0; s[i] != '\0'; i = i + 1)
    {
        for (j = i + 1; s[j] != '\0'; j = j + 1)
        {
            if (s[i] == s[j])
            {
                printf("%c", s[i]);
                return 0;
            }
        }
    }

    return 0;
}
