// Lab 5 areas2.cpp
// This program computes the area of a object of the users' choice
// Mariano, Kenth Jarren S.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    // Variables needed and used
    int choice;
    double PI_VAL = 3.14159, side, base,
    height, radius, AREAsquare, AREAcircle, AREArtriangle;
    while (true) {
        // Simple user prompt of the choice
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << right << setw(76) << "[WELCOME TO AREAS CALCULATOR PROGRAM]";
        cout << endl << right << setw(76) << "=====================================";
        cout << endl << endl << right << setw(80) << "1 -- Square, 2 -- Circle, 3 -- Right Triangle";
        cout << endl << right << setw(82) << "-------------------------------------------------";
        cout << endl << "\nEnter the number of choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
            // Users' will prompt the value of the side in cm
            cout << "\nEnter the side of the square: ";
            cin >> side;
            AREAsquare = pow(side, 2); // Computes the area of the square
            // Displays the final output for the square
            cout << "\n-----------------------------";
            cout << endl << "\nSide of the square: " << fixed << setprecision(1) << side << "cm ";
            cout << "\nArea = " << AREAsquare << "cm^2 " << endl;
            cout << "\n-----------------------------";
            break;
            case 2:
             // Users' will prompt the value of the radius in cm
            cout << "\nEnter the radius of the circle: ";
            cin >> radius;
            AREAcircle = PI_VAL * (pow(radius, 2)); // Computes the area of the circle
            // Displays the final output for the circle
            cout << "\n-----------------------------";
            cout << endl << "\nRadius of the circle: " << fixed << setprecision(1) << radius << "cm ";
            cout << "\nArea = " << fixed << setprecision(4) << AREAcircle << "cm^2" << endl;
            cout << "\n-----------------------------";
            break;
            case 3:
            // Users' will prompt the value of the base and height in cm
            cout << "\nEnter the base of the right triangle: ";
            cin >> base;
            cout << "\nEnter the height of the right triangle: ";
            cin >> height;
            AREArtriangle = 0.5 * base * height; // Computes the area of the right triangle
            // Displays the final output for the right triangle
            cout << "\n------------------------------------";
            cout << endl << "\nBase of the right triangle: " << fixed << setprecision(1) << base << "cm ";
            cout << "\nHeight of the right triangle: " << fixed << setprecision(1) << height << "cm ";
            cout << "\nArea = " << AREArtriangle << "cm^2 " << endl;
            cout << "\n------------------------------------";
            break;
            case 4:
            return 0;
            default:
            for (int i = 0; i < 3; i++) {
                cout << "\n[ERROR]" << endl; // Loops the error 3 times
            }  cout << "\n[An error has occured due to invalid input]" << endl; // Displays the error message
        }
    }
}
