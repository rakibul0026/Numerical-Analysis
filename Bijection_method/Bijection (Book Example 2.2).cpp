#include <iostream>
using namespace std;

double func(double x)
{
    return x * x * x - 2 * x - 5;
}
double c;
void bisection(double a, double b, double e)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "Incorruct a and b" << endl;
        return;
    }
    c = 0;
    while ((b - a) >= e)
    {
        c = (a + b) / 2;
        if (func(c) == 0.0)
        {
            cout << "Root" << c << endl;
            break;
        }
        else if (func(c) * func(a) > 0)
        {
            cout << "Root :" << c << endl;
            a = c;
        }
        else
        {
            cout << "Root :" << c << endl;
            b= c;
        }
    }
}

int main()
{
    double a, b, e;
    cout << "Enter The value of a and b" << endl;
    cin >> a >> b;

    cout << "Enter the value of e" << endl;
    cin >> e;
     bisection(a, b, e);
}
