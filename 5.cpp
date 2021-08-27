//Problem 5
//Write a program in C++ to display the operation of pre and post increment and decrement.

#include <iostream>
using namespace std;
    int main()
    {
        int a;
        cout<<"Enter an integer - "<<endl;
        cin>>a;

        cout<<"The integer entered is : "<<a<<endl;
        cout<<"After post-increment "<<a<<" will be = "<<a++<<endl;
        cout<<"After pre-increment "<<a<<" will be = "<<++a<<endl;
        cout<<"After post-decrement "<<a<<" will be = "<<a--<<endl;
        cout<<"After pre-decrement "<<a<<" will be = "<<--a<<endl;

        return 0;
    }