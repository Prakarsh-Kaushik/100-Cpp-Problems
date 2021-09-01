//Problem 13 C++
//Write a program in C++ to convert temperature in Celsius to Fahrenheit.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float celcius, fahrenheit;

            cout<<"Enter Celcius - "<<endl;
            cin>>celcius;

            fahrenheit = (celcius*9/5)+32;

            cout<<celcius<<" degree celcius on conversion will be "<<fahrenheit<<" degree fahrenheit";

            return 0;
        }