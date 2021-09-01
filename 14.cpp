//Problem 14 C++
//Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float fahrenheit, celcius;

            cout<<"Enter Fahrenheit - "<<endl;
            cin>>fahrenheit;

            celcius = (fahrenheit-32)*5/9;

            cout<<fahrenheit<<" degree fahrenheit on conversion will be "<<celcius<<" degree celcius";

            return 0;
        }