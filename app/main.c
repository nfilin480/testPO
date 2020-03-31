#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include "equation.h"

int main()
{
    double a = 0, b = 0, c = 0;
    double* x;
    x = (double*) malloc(2 * sizeof(double));

    printf("Print a: ");
    if (scanf("%lf", &a) == 0){
        fprintf(stderr, "Ошибка чтения");
        exit(EXIT_FAILURE);
    };

    printf("Print b: ");
    if (scanf("%lf", &b) == 0){
        fprintf(stderr, "Ошибка чтения");
        exit(EXIT_FAILURE);
    };

    printf("Print c: ");
    if (scanf("%lf", &c) == 0){
        fprintf(stderr, "Ошибка чтения");
        exit(EXIT_FAILURE);
    };
    int result = equation(a, b, c, x);

    if (result == 0) printf("Equation has no roots\n");
    else if (result == 1) printf ("Equation has a root: %.2lf", x[0]); else printf ("Equation has two roots: %.2lf, %.2lf", x[0], x[1]);

    return myfunc(2);
}
