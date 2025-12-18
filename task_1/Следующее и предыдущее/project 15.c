#include <stdio.h>

int main(void)
{
    int n;
    int next;
    int previous;

    scanf("%d", &n);

    next = n + 1;
    previous = n - 1;

    printf("The next number for the number %d is %d.\n", n, next);
    printf("The previous number for the number %d is %d.", n, previous);

    return 0;
}
