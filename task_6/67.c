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

    int found;
    found = 0;

    for (i = 1; i < n; i = i + 1)
    {
        if ((a[i] > 0 && a[i - 1] > 0) || (a[i] < 0 && a[i - 1] < 0))
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    free(a);

    return 0;
}
