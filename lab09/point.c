#include <stdio.h>

struct point
{
    double x;
    double y;
};

struct point middle(struct point a, struct point b)
{
    struct point middle_point;

    middle_point.x = (a.x + b.x) / 2;
    middle_point.y = (a.y + b.y) / 2;

    return middle_point;
}

int main()
{
    struct point point_1 = {1.2, 5.4};
    struct point point_2 = {7.3, 1.8};

    struct point middle_point_result = middle(point_1, point_2);

    printf("Middle coordinates: (%.2lf, %.2lf)\n", middle_point_result.x, middle_point_result.y);

    return 0;
}