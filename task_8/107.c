#include <stdio.h>

int main()
{
    char s[1001];
    fgets(s, 1001, stdin);

    int i;
    i = 0;

    int current_length;
    current_length = 0;

    int max_length;
    max_length = 0;

    int current_start;
    current_start = 0;

    int max_start;
    max_start = 0;

    while (s[i] != '\0')
    {
        if (s[i] != ' ' && s[i] != '\n')
        {
            if (current_length == 0)
            {
                current_start = i;
            }

            current_length = current_length + 1;
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
                max_start = current_start;
            }

            current_length = 0;
        }

        i = i + 1;
    }

    if (current_length > max_length)
    {
        max_length = current_length;
        max_start = current_start;
    }

    for (i = max_start; i < max_start + max_length; i = i + 1)
    {
        printf("%c", s[i]);
    }

    printf("\n");
    printf("%d", max_length);

    return 0;
}
