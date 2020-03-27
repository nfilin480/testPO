#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPS 0.000000000000000001

int equation(double a, double b, double c, double* x)
{
    double d = b * b - 4 * a * c;

     if (a == EPS && b != EPS) {
         x[0] = -c / b;
         return 1;
     }
//     if (b == 0){
//	x[0] = sqrt()




    if (d > EPS && a != EPS) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        x[1] = (-b - sqrt(d)) / (2 * a);
	return 2;
    } else if (d == EPS && a!= EPS) {
        x[0] = (-b + sqrt(d)) / (2 * a);
        return 1;
    }

    if (d < EPS) return 0; else return -1;
}
