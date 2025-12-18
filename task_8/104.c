#include <stdio.h>

char change_register(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }

    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }

    return c;
}

int main()
{
    char c;
    scanf("%c", &c);

    char result;
    result = change_register(c);

    printf("%c", result);

    return 0;
}
