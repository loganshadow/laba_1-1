#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    complex c1[2];
    float  real, imagine;
    int f;
    cout << "enter complex number" << endl;
    c1[1].define();
    cout << "enter another complex number" << endl;
    c1[2].define();
    cout << "What you want to do?" << endl;
    cout << "1) +" << endl;
    cout << "2) -" << endl;
    cout << "3) *" << endl;
    cout << "4) /" << endl;
    cin >> f;
    switch (f) {
        case 1:
            addition(c1[1].re, c1[1].im, c1[2].re, c1[2].im);
            break;
        case 2:
            subtraction(c1[1].re, c1[1].im, c1[2].re, c1[2].im);
            break;
        case 3:
            multiplication(c1[1].re, c1[1].im, c1[2].re, c1[2].im);
            break;
        case 4:
            division(c1[1].re, c1[1].im, c1[2].re, c1[2].im);
            break;
        default:
            cout << "wrong operation" << endl;
    }
    return 0;
}