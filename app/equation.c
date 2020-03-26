#include <stdio.h>
#include <math.h>

int equation ()
{
    double* m;
    double d;
    double a,b,c;
    double x1, x2;
    printf("Введите член a: ");
    scanf("%lf", &a);
    printf("\nВведите член b: ");
    scanf("%lf", &b);
    printf("\nВведите член c: ");
    scanf("%lf", &c);
    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
    } else  if (d < 0)
        printf("\nНет корней");
        else x1 = ((-b + sqrt(d)) / 2 * a);
    //printf("%lf" "%lf", x1, x2);
    m[0] = x1;
    m[1] = x2;
    printf("%lf" "%lf", m[0], m[1]);
    return 0;
}
