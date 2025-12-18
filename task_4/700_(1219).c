// Двойной переворот


#include <stdio.h>
#include <stdlib.h>

void reverse(int *a, int l, int r)
{
    while (l < r)
    {
        int temp;
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        l = l + 1;
        r = r - 1;
    }
}

int main()
{
    int n;
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));

    int i;
    for (i = 0; i < n; i = i + 1)
    {
        arr[i] = i + 1;
    }

    reverse(arr, a - 1, b - 1);
    reverse(arr, c - 1, d - 1);

    for (i = 0; i < n; i = i + 1)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
