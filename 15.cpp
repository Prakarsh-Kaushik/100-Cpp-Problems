//Problem 15 C++
//Write a program in C++ to find the third angle of a triangle.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float a,b,c;

            cout<<"Enter the two sides of triangle"<<endl;
            cin>>a>>b;


            c= 180-(a+b);
            cout<<"The third side of triangle is - "<<c<<endl;

            return 0;
        }