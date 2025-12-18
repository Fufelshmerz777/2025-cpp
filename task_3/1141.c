// Равные элементы


#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int prev;
    prev = x;

    int current_count;
    current_count = 1;

    int max_count;
    max_count = 1;

    do
    {
        scanf("%d", &x);

        if (x == 0)
        {
            break;
        }

        if (x == prev)
        {
            current_count = current_count + 1;
        }
        else
        {
            if (current_count > max_count)
            {
                max_count = current_count;
            }

            current_count = 1;
            prev = x;
        }

    } while (x != 0);

    if (current_count > max_count)
    {
        max_count = current_count;
    }

    printf("%d", max_count);

    return 0;
}
