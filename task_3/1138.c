// Второй максимум


#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int first;
    first = x;

    scanf("%d", &x);

    int second;
    second = x;

    int max1;
    int max2;

    if (first >= second)
    {
        max1 = first;
        max2 = second;
    }
    else
    {
        max1 = second;
        max2 = first;
    }

    do
    {
        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }

        if (x > max1)
        {
            max2 = max1;
            max1 = x;
        }
        else if (x == max1)
        {
            max2 = max1;
        }
        else if (x > max2)
        {
            max2 = x;
        }

    } while (x != 0);

    printf("%d", max2);

    return 0;
}
