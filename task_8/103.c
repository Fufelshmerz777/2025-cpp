#include <stdio.h>

char ToUpper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }

    return c;
}

int main()
{
    char c;
    scanf("%c", &c);

    char result;
    result = ToUpper(c);

    printf("%c", result);

    return 0;
}
