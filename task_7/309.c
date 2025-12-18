#include <stdio.h>

int Election(int x, int y, int z)
{
    int sum;
    sum = x + y + z;

    if (sum >= 2)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int x;
    int y;
    int z;

    scanf("%d %d %d", &x, &y, &z);

    int result;
    result = Election(x, y, z);

    printf("%d", result);

    return 0;
}
