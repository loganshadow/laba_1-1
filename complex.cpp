//
// Created by mikh- on 25.03.2019.
//
#include <iostream>
#include "complex.h"
using namespace std;
void complex::define() {
    float a, b;
    cin >> a;
    cin >> b;
    cout << a << " + " << "i*" << b << endl;
    re = a;
    im = b;
}



void addition (float a1, float a2, float b1, float b2){
    float re, im;
    re = a1 + b1;
    im = a2 + b2;
    cout << re << " + " << "i*" << im << endl;
}
void subtraction (float a1, float a2, float b1, float b2){
    float re, im;
    re = a1 - b1;
    im = a2 - b2;
    cout << re << " + " << "i*" << im << endl;
}
void multiplication (float a1, float a2, float b1, float b2){
    float re, im;
    re = a1 * b1 - a2 * b2;
    im = a1 * b2 + a2 * b1;
    cout << re << " + " << "i*" << im << endl;
}
void division (float a1, float a2, float b1, float b2){
    double re = (a1*b1 - a2*-b2)/(b1*b1 + b2*b2);
    double im = (a1*-b2 + a2*b1)/(b1*b1 + b2*b2);
    cout << re << " + " << "i*" << im << endl;
}