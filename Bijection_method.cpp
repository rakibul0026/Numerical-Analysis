#include <stdio.h>
#define MAX_ITER 1000  // Maximum number of iterations

// Function to find the value of the function at a given point x
double func(double x) {
    return x * x - 7;
}

// Function to implement the bisection method
void bisection(double a, double b) {
    // Check if initial guesses do not bracket the root
    if (func(a) * func(b) >= 0) {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c = a; // Initialize midpoint
    for (int i = 0; i < MAX_ITER; i++) {
        // Find midpoint
        c = (a + b) / 2;

        // Check if midpoint is root
        if (func(c) == 0.0)
            break;

        // Decide the side to repeat the steps
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;

        // Optional: Break if the interval is sufficiently small
        if ((b - a) < 1e-6)  // This value can be adjusted as needed
            break;
    }
    printf("The value of root is: %lf\n", c);
}

// Driver program to test above function
int main() {
    // Initial values assumed
    double a = 1, b = 4;
    bisection(a, b);
    return 0;
}
