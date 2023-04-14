#include <stdio.h>
#include <math.h>
int main()
{
    double A, B, D, E, F;
    scanf("%lf%lf%lf%lf%lf", &A, &B, &D, &E, &F);
    if (A != B || (A == 0 && B == 0)) {
        printf("No circle");
        return 0;
    }
    double d = D / A; // 将系数化为d,e,f
    double e = E / B;
    double f = F / A;
    double r_squared = (d * d + e * e - 4 * f) / 4; // 计算半径平方
    if (r_squared <= 0) {
        printf("No circle");
        return 0;
    }
    double r = sqrt(r_squared); // 计算半径
    double center_x = -d / 2; // 计算圆心坐标
    double center_y = -e / 2;
    printf("Center of a circle is(%.2f,%.2f)\n", center_x, center_y);
    printf("Radius of the circle is %.2f\n", r);
    
    return 0;
}
