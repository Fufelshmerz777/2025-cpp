#include <stdio.h>

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    if (x1 == x2 && y2 > y1 && y1 >= 2)
    {
        if (y2 - y1 == 1)
        {
            printf("YES");
            return 0;
        }

        if (y1 == 2 && y2 - y1 == 2)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}
