#include <stdio.h>

int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int count;
    count = 1;

    int i;
    i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            count = count + 1;
        }

        i = i + 1;
    }

    printf("%d", count);

    return 0;
}
