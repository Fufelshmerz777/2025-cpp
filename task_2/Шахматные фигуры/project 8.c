#include <stdio.h>

int abs_int(int x)
{
    if (x < 0)
    {
        return -x;
    }

    return x;
}

int main()
{
    char c1;
    int y1;
    char c2;
    int y2;

    scanf(" %c%d %c%d", &c1, &y1, &c2, &y2);

    int x1;
    int x2;

    x1 = c1 - 'A' + 1;
    x2 = c2 - 'A' + 1;

    int dx;
    int dy;

    dx = abs_int(x2 - x1);
    dy = abs_int(y2 - y1);

    const char *out[6];
    int cnt;
    cnt = 0;

    /* Rook */
    if (dx == 0 || dy == 0)
    {
        out[cnt] = "Rook";
        cnt = cnt + 1;
    }

    /* Bishop */
    if (dx == dy)
    {
        out[cnt] = "Bishop";
        cnt = cnt + 1;
    }

    /* Knight */
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2))
    {
        out[cnt] = "Knight";
        cnt = cnt + 1;
    }

    /* Queen */
    if (dx == 0 || dy == 0 || dx == dy)
    {
        out[cnt] = "Queen";
        cnt = cnt + 1;
    }

    /* King */
    if (dx <= 1 && dy <= 1)
    {
        out[cnt] = "King";
        cnt = cnt + 1;
    }

    /* Pawn (white, no capture) */
    if (x1 == x2 && y2 > y1 && y1 >= 2)
    {
        if (y2 - y1 == 1)
        {
            out[cnt] = "Pawn";
            cnt = cnt + 1;
        }
        else if (y1 == 2 && y2 - y1 == 2)
        {
            out[cnt] = "Pawn";
            cnt = cnt + 1;
        }
    }

    if (cnt == 0)
    {
        printf("Nobody");
        return 0;
    }

    int i;
    for (i = 0; i < cnt; i = i + 1)
    {
        if (i > 0)
        {
            printf("\n");
        }

        printf("%s", out[i]);
    }

    return 0;
}
