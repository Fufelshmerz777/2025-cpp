#include <stdio.h>

int main(void)
{
    int k;
    int n;
    int page;
    int line;

    scanf("%d %d", &k, &n);

    page = (n + k - 1) / k;
    line = n - (page - 1) * k;

    printf("%d %d", page, line);

    return 0;
}
