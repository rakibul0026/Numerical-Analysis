#include <bits/stdc++.h>
using namespace std;

double func(double x)
{
    return (4*exp(-x)*sin(x)-1);
}
double deri_func(double x)
{
    return 4*(exp(-x)*cos(x)-sin(x)*exp(-x));
}

int main()
{
    double x, n;
    cout << "Enter the value of x:";
    cin >> x;
    cout << "Enter the value of iteration";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double func_value = func(x);
        double devi_value = deri_func(x);

        if (devi_value == 0)
        {
            cout << "ERROR";
            break;
        }
        x = x - func_value / devi_value;

    }
    cout<<"Root :"<<x<<endl;
    return 0;

}
