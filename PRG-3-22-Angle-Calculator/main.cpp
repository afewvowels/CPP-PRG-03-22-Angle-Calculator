//
//  main.cpp
//  PRG-3-22-Angle-Calculator
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user for an angle, entered in radians. The program
//  should then display the sine, cosine, and tangent of the angle. (Use the sin, cos, and
//  tan library functions to determine these values.) The output should be displayed in
//  fixed-point notation, rounded to four decimal places of precision.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float fltUserAngle,
          fltAnswerSine,
          fltAnswerCosine,
          fltAnswerTangent;
    
    cout << "Please enter an angle in radians: " << endl;
    cin >> fltUserAngle;
    
    fltAnswerSine = sin(fltUserAngle);
    fltAnswerCosine = cos(fltUserAngle);
    fltAnswerTangent = tan(fltUserAngle);
    
    cout << setprecision(4) << fixed << showpoint;
    
    cout << "Your angle " << fltUserAngle << " has the following values: " << endl
         << "Sine: " << fltAnswerSine << endl
         << "Cosine: " << fltAnswerCosine << endl
         << "Tangent: " << fltAnswerTangent << endl;
    
    return 0;
}


