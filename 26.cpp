//Problem 26
//Write a program in C++ which swap the values of two variables not using third variable.

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout<<"Enter the first value - ";
    cin>>x;1
    cout<<"Enter the second value - ";
    cin>>y;

    //swappping without using third variable
    x = x+y;
    y = x-y;
    x = x-y;

    cout<<"After Swapping, X = "<<x<<" & Y = "<<y<<endl;

    return 0;
}