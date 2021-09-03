//Problem 17 C++
// Write a program in C++ to convert temperature in Kelvin to Fahrenheit. 

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float k, fahrenheit;

            cout<<"Enter temperature in Kelvin - ";
            cin>>k;

            fahrenheit= (k-273.15)*9/5+32;
            cout<<k<<" degree Kelvin will be equal to "<<fahrenheit<<" degree Fahrenheit";

            return 0;
        }