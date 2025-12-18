// Ближайшее число


#include <stdio.h>
#include <stdlib.h>

int abs_int(int x)
{
    if (x < 0)
    {
        return -x;
    }

    return x;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *a;
    a = (int *)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int best_value;
    best_value = a[0];

    int best_diff;
    best_diff = abs_int(a[0] - x);

    for (i = 1; i < n; i = i + 1)
    {
        int diff;
        diff = abs_int(a[i] - x);

        if (diff < best_diff)
        {
            best_diff = diff;
            best_value = a[i];
        }
        else if (diff == best_diff)
        {
            if (a[i] < best_value)
            {
                best_value = a[i];
            }
        }
    }

    printf("%d", best_value);

    free(a);

    return 0;
}

