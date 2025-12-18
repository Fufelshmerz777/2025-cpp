#include <stdio.h>

int main(void)
{
    int g;
    int l;
    int not_garry;
    int not_larry;

    scanf("%d %d", &g, &l);

    not_garry = l - 1;
    not_larry = g - 1;

    printf("%d %d", not_garry, not_larry);

    return 0;
}
