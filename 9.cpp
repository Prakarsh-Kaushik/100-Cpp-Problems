//Problem 9 C++(Hackerrank)
//Write a program in C++ to calculate the volume of a cylinder

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float radius, height;
            cout<<"Enter radius of Cylinder : ";
            cin>>radius;
            cout<<"Enter height of Cylinder : ";
            cin>>height;

            float volume = M_PI*pow(radius,2)*height;
            cout<<"Volume of Cylinder having a radius of "<<radius<<" and height "<<height<<" is = "<<fixed<<setprecision(3)<<volume<<endl;

            return 0;
        }