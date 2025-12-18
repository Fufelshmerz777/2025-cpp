// Контроперация


#include <stdio.h>
#include <stdlib.h>

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

    int min_value;
    min_value = a[0];

    int max_value;
    max_value = a[0];

    for (i = 1; i < n; i = i + 1)
    {
        if (a[i] < min_value)
        {
            min_value = a[i];
        }

        if (a[i] > max_value)
        {
            max_value = a[i];
        }
    }

    for (i = 0; i < n; i = i + 1)
    {
        if (a[i] == max_value)
        {
            a[i] = min_value;
        }
    }

    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}
