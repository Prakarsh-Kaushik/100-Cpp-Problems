//Problem 19 C++
//Write a program in C++ to convert temperature in Fahrenheit to Kelvin
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
    {
        float fahrenheit, kelvin;
        cout<<"Enter the temperature in Fahrenheit - ";
        cin>>fahrenheit;

        kelvin = (fahrenheit - 32) *5/9 + 273.15;

        cout<<endl<<fahrenheit<<" degree Fahrenheit in Kelvin is "<<kelvin;
        return 0;
    }