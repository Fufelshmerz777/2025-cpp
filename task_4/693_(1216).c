// Максимальный элемент


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

    int l;
    int r;
    scanf("%d %d", &l, &r);

    int max_value;
    max_value = a[l - 1];

    int max_index;
    max_index = l;

    for (i = l; i <= r; i = i + 1)
    {
        if (a[i - 1] > max_value)
        {
            max_value = a[i - 1];
            max_index = i;
        }
    }

    printf("%d %d", max_value, max_index);

    free(a);

    return 0;
}
