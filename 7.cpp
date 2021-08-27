//Problem 7 C++(Hackerrank)
//Write a program in C++ to calculate the volume of a sphere

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
    int  main()
        {
            float radius;
            cout<<"Enter radius of sphere : "<<endl;
            cin>>radius;

            float volume = (4*M_PI*pow(radius,3))/3;
            cout<<"Volume of sphere with radius "<<setprecision(5)<<radius<<" is = "<<volume;

            return 0; 
        }