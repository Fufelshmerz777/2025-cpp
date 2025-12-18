#include <stdio.h>

void sort3(int a[3]) {
    int t;
    if (a[0] > a[1]) { t = a[0]; a[0] = a[1]; a[1] = t; }
    if (a[1] > a[2]) { t = a[1]; a[1] = a[2]; a[2] = t; }
    if (a[0] > a[1]) { t = a[0]; a[0] = a[1]; a[1] = t; }
}

int main() {
    int a[3], b[3];

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    sort3(a);
    sort3(b);

    if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2]) {
        printf("Boxes are equal");
    }
    else if (a[0] <= b[0] && a[1] <= b[1] && a[2] <= b[2]) {
        printf("The first box is smaller than the second one");
    }
    else if (a[0] >= b[0] && a[1] >= b[1] && a[2] >= b[2]) {
        printf("The first box is larger than the second one");
    }
    else {
        printf("Boxes are incomparable");
    }

    return 0;
}
