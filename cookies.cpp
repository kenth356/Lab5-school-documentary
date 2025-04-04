// Lab 5 - cookies.cpp
// This program finds the average number of boxes of cookies
// sold by the children in a particular scout troop.
// It illustrates the use of a counter, an accumulator,
// and an end sentinel.
// Mariano, Kenth Jarren S.
#include <iostream>

using namespace std;
int main() {
    int numBoxes, totalBoxes = 0, numSeller = 1;
    double averageBoxes;
    cout << endl << "           **** Cookie Sales Information **** \n\n";
    cout << "\nEnter number of boxes of cookies sold by seller " << numSeller
    << " (or -1 to quit): ";
    cin >> numBoxes;
    while (numBoxes != -1) {
        totalBoxes += numBoxes;
        numSeller++;
        cout << "\nEnter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): ";
        cin >> numBoxes;
        while (numBoxes < -1) {
            cout << "\nEnter number of boxes of cookies sold by seller " << numSeller << " (or -1 to quit): ";
            cin >> numBoxes;
        }
    } numSeller--;
    if (numSeller == 0) {
        cout << "\nNo boxes were sold. \n";
    } else {
        averageBoxes = static_cast<double>(totalBoxes) / numSeller;
        cout << "\nThe average number of boxes sold  by the " << numSeller << " sellers was " << averageBoxes << ". " << endl;
    }

    return 0;
}
