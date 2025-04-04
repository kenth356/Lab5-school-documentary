// Lab 5 - summation.cpp
// This program  displays a series of terms and compute its sum.
// Mariano, Kenth Jarren S.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    int denom, n;
    double sum = 0.0, term;
    char verifChoice = 'y';
    cout << "\nMariano, Kenth Jarren S." << endl;
    while (verifChoice == 'y' || verifChoice == 'Y') {
        cout << "\nThis program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n";
        cout << "\nWhat should n be in the final term (2 - 10)? ";
        cin >> n;
        cout << endl;
        if (n < 2 || n > 10) {
            cout << "\nThis program sums the series 1/2^1 + 1/2^2 + 1/2^3 + . . . + 1/2^n";
            cout << "\nWhat should n be in the final term (2 - 10)? ";
            cin >> n;
            cout << endl;
        } sum = 0.0;
        denom = 2;
        term = 1.0;
        for (int i = 1; i <= n; i++) {
            term = 1.0 / denom;
            cout << "1/" << denom;
            if (i < n) {
                cout << " + ";
            } else {
                cout << " = ";
            } sum += term;
            denom *= 2;
        } cout << fixed << setprecision(5) << sum << endl;
        cout << "\nDo you want to compute another series? ";
        cin >> verifChoice;
    }
    return 0;
}
