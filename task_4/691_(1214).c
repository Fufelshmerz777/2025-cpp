// Линейный поиск


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

    int x;
    scanf("%d", &x);

    int count;
    count = 0;

    for (i = 0; i < n; i = i + 1)
    {
        if (a[i] == x)
        {
            count = count + 1;
        }
    }

    printf("%d", count);

    free(a);

    return 0;
}
