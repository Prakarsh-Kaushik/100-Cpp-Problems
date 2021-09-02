//Problem 16 C++
// Write a program in C++ that converts kilometers per hour to miles per hour.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float kmph, miph;

            cout<<"Enter speed in Kilometers per hour - ";
            cin>>kmph;

            miph = kmph * 0.6213712;
            cout<<kmph<<" Kilometers per hour will be = "<<fixed<<setprecision(2)<<miph<<" Miles per hour";

            return 0; 
        }