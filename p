/* Program: Finding real roots of nonlinear equation using Bisection Method */
#include <stdio.h>
#define MAX_ITER 1000  // Maximum number of iterations

double func(double x) {
    return x * x - 7;
}

void bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c = a; 
    for (int i = 0; i < MAX_ITER; i++) {
        // Find midpoint
        c = (a + b) / 2;
        
        if (func(c) == 0.0)
            break;

        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;

      
        if ((b - a) < 1e-6)  
            break;
    }
    printf("The value of root is: %lf\n", c);
}

int main() {
    double a = 1, b = 4;
    bisection(a, b);
    return 0;
}
