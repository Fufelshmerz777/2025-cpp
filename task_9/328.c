#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i;

    double sum_math;
    sum_math = 0;

    double sum_physics;
    sum_physics = 0;

    double sum_info;
    sum_info = 0;

    for (i = 0; i < n; i = i + 1)
    {
        char surname[50];
        char name[50];

        int math;
        int physics;
        int info;

        scanf("%s %s %d %d %d", surname, name, &math, &physics, &info);

        sum_math = sum_math + math;
        sum_physics = sum_physics + physics;
        sum_info = sum_info + info;
    }

    double avg_math;
    avg_math = sum_math / n;

    double avg_physics;
    avg_physics = sum_physics / n;

    double avg_info;
    avg_info = sum_info / n;

    printf("%.1f %.1f %.1f", avg_math, avg_physics, avg_info);

    return 0;
}
