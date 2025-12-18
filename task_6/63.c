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

    for (i = 0; i < n; i = i + 2)
    {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}
