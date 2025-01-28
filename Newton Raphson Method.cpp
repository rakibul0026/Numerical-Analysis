// C++ program for implementation of Newton Raphson Method for
// solving equations
#include <iostream>
#include <cmath>
using namespace std;
float fun(float x) {
    return (x * sin(x) + cos(x));
}
float fun_Derivative(float x) {
    return (sin(x) + x * cos(x));
}
int main() {
    float x;
    int i = 0, n;
    cout << "Enter first approximation: ";
    cin >> x; 
    cout << "Enter number of iterations: ";
    cin >> n; // Number of iterations

    while (i < n) {
        float f_value = fun(x);
        float derivative_value = fun_Derivative(x);

        if (derivative_value == 0) {
            cout << "Mathematical Error: Derivative is zero!" << endl;
            break;
        }

        x = x - f_value / derivative_value;
        i++;
    }

    cout << "Approximate root: " << x << endl;
    return 0;
}
