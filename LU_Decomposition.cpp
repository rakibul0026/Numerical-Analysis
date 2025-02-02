#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    double array[3][3], lower[3][3] = {0}, upper[3][3] = {0};

    cout << "Input the 3x3 matrix to factorize:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        
        for (int j = i; j < n; j++) {
            upper[i][j] = array[i][j];
            for (int k = 0; k < i; k++) {
                upper[i][j] -= lower[i][k] * upper[k][j];
            }
        }

        for (int j = i; j < n; j++) {
            if (i == j)
                lower[i][i] = 1;
            else {
                lower[j][i] = array[j][i];
                for (int k = 0; k < i; k++) {
                    lower[j][i] -= lower[j][k] * upper[k][i];
                }
                lower[j][i] /= upper[i][i];
            }
        }
    }

    cout << "\nLower Triangular Matrix (L):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << lower[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nUpper Triangular Matrix (U):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << upper[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
