//Problem 21
//Write a program in C++ to find the area of Scalene Triangle

#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

        int main()
        {
            float side1, side2,angle;
            cout<<"Enter length of first side of Scalen Triangle : "<<endl;
            cin>>side1;5
            cout<<"Enter length of second side of Scalen Triangle : "<<endl;
            cin>>side2;
            cout<<"Enter angle between the two side of Scalen Triangle : "<<endl;
            cin>>angle;

            float area = side1 * side2 * sin((M_PI/180)*angle)/2; 

            cout<<"Area of Scalene Triangle with Sides "<<side1<<" & "<<side2<< " and Angle between these sides "<<angle<< "is :"<<fixed<<setprecision(4)<<area;
            return 0;
        }