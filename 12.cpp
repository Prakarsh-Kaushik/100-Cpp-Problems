//Problem 12 C++
//Write a program in C++ to find the area and circumference of a circle.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
            {
                float radius, circumference, area;
                cout<<"Enter the radius of Circle - "<<endl;
                cin>>radius;
                area = M_PI*pow(radius,2);
                circumference = 2*M_PI*radius;

                cout<<"Area of Circle with radius "<<radius<<" is = "<<fixed<<setprecision(2)<<area<<endl;
                cout<<"Circumference of Circle with radius "<<radius<<" is = "<<fixed<<setprecision(2)<<circumference;

                return 0;
            }