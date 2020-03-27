#include <math.h>

int equation(double a, double b, double c, double* x)
{
    double d = b * b - 4 * a * c;

    if (a == 0 && b != 0) {
         x[0] = -c / b;
         return 1;
     }

    if (d > 0 && a != 0) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        x[1] = (-b - sqrt(d)) / (2 * a);
	return 2;
    } else if (d == 0 && a != 0) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        return 1;
    }

    if (d < 0) return 0; else return -1;
}
