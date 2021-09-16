//Problem 18 C++
//Write a program in C++ to convert temperature in Kelvin to Celsius.
#include<iostream>
using namespace std;
    int main()
    {
        float kelvin, celsius;

        cout<<"Enter the temperature in Kelvin - ";
        cin>>kelvin;

        celsius = kelvin - 273.15;

        cout<<endl<<kelvin<<" Kelvin in Celsius is "<<celsius<<" degree Celsius";
    }