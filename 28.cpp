//Problem 28
//Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30
#include<iostream>
using namespace std;

bool test(int x, int y)
{
    return x==30 || y==30 || x+y==30;
    
}

int main(){
   int x,y;

   cout<<"Enter the first integer - ";
   cin>>x;
   cout<<"Enter the second integer - ";
   cin>>y;

    cout<<test(x, y);
    return 0;
}