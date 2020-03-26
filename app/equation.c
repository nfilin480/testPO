#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int equation(double a, double b, double c, double* x)
{
    double d = b * b - 4 * a * c;

    if (d > 0) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        x[1] = (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        return 1;
    }
        else {
        return 0;
    }
    return 1;
}
