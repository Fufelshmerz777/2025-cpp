// Оттепель


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int current;
    current = 0;

    int max_len;
    max_len = 0;

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        int t;
        scanf("%d", &t);

        if (t > 0)
        {
            current = current + 1;
        }
        else
        {
            if (current > max_len)
            {
                max_len = current;
            }

            current = 0;
        }
    }

    if (current > max_len)
    {
        max_len = current;
    }

    printf("%d", max_len);

    return 0;
}
