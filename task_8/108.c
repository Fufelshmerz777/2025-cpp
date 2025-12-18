#include <stdio.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int length;
    length = 0;

    while (s[length] != '\0')
    {
        length = length + 1;
    }

    int i;
    for (i = 0; i < length / 2; i = i + 1)
    {
        if (s[i] != s[length - 1 - i])
        {
            printf("no");
            return 0;
        }
    }

    printf("yes");

    return 0;
}
