#include <stdio.h>

int IsDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char c;
    scanf("%c", &c);

    int result;
    result = IsDigit(c);

    if (result == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}

