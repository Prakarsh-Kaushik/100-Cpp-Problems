//Problem 11 C++
//Write a program in C++ to find the area of any triangle using Heron's Formula.

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float s,a,b,c,area;
            cout<<"Enter the three sides of Triangle"<<endl;
            cin>>a;
            cin>>b;
            cin>>c;

            s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));

            cout<<"The area of Triangle with  Sides "<<a<<" "<<b<<" "<<c<<" using Heron's Formula is = "<<area;

            return 0;

        }