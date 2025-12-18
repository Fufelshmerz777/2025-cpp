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

    for (i = 0; i < n / 2; i = i + 1)
    {
        int temp;
        temp = a[i];

        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}
