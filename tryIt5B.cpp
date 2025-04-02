#include <iostream>

using namespace std;
int main() {
    int i, sum;
    i = 1;
    while (i < 10) {
        cout << i << ' ';
        i += 2;
    }

    cout << "\nAfter loop i = " << i << endl << endl;

    i = 5;
    while (i > 0)
    cout << i-- << ' ';
    cout << "\nAfter loop i = " << i << endl << endl;

    i = 1;
    do {
        cout << i * i << ' ';
        i++;
    } while (i <= 3);
    cout << "\nAfter loop i = " << i << endl << endl;

    sum = 0;
    for (i = 0; i < 4; i++)
        sum += i;
    cout << "\nAfter loop i = " << i << endl << endl;
    cout << "\nsum = " << sum << endl << endl;

    for (i = 0; i++ < 4;)
        cout << i << ' ';
    cout << "\nAfter loop i = " << i << endl << endl;

    return 0;
}
