#include <stdio.h>

int main(void)
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    if ((a % b == 0) || (b % a == 0))
    {
        printf("1");
    }
    else
    {
        printf("2");
    }

    return 0;
}
