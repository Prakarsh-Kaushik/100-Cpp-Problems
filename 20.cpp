//Problem 20 C++
//Write a program in C++ to convert temperature in Celsius to Kelvin.
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float celsius, kelvin;
            cout<<"Enter the templerature in Celsius - ";
            cin>>celsius;

            kelvin = celsius + 273.15;

            cout<<endl<<celsius<<" degree celcius in kelvin is  "<<kelvin<<endl;

            return 0;
        }