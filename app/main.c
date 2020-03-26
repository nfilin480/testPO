#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    double a = 0, b = 0, c = 0;
    double* x;
    x = (double*) malloc(2 * sizeof(double));

    printf("Print a: ");
    scanf("%lf", &a);
    printf("Print b: ");
    scanf("%lf", &b);
    printf("Print c: ");
    scanf("%lf", &c);
    int result = equation(a, b, c, x);

    if (result == 0) printf("Equation has no roots\n");
    else if (result == 1) printf ("Equation has a root: %.2lf", x[0]); else printf ("Equation has two roots: %.2lf, %.2lf", x[0], x[1]);

    return myfunc(2);
}
