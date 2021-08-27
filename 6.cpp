//Problem 6  C++(Hackerrank)
//Write a program in C++ to swap two numbers.

#include<iostream>
using namespace std;
    int main()
        {
            int a, b;
            cout<<"Enter two integers to swap : "<<endl;
            cin>>a>>b;
            cout<<"First Number entered is : "<<a<<endl;
            cout<<"Second Number entered is : "<<b<<endl;

            int temp;
            temp = a;
            a=b;
            b=temp;

            cout<<"First Number after swap is  : "<<a<<endl;
            cout<<"Second Number after swap is  : "<<b<<endl;

        return 0;

        }