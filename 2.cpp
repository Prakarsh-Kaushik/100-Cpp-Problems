//Problem 2
//Write a program in C++ to print the sum of two numbers.

#include <iostream>
#include <iomanip>
using namespace std;
    int main()
        {
            float a,b;
            cout<<"Enter two numbers  - "<<endl;
            cin>>a;     cin>>b;
            float sum = (a+b);
            cout<<"Sum of "<<a<<" & "<<b<<" = "<<setprecision(4)<<sum<<endl;

            return 0;
        }