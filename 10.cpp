//Problem 10 C++(Hackerrank)
//Write a program in C++ to find the Area and Perimeter of a Rectangle.

#include<iostream>
#include<Iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float length, breadth, area, perimeter;
            cout<<"Enter length of Rectangle :  ";
            cin>>length;
            cout<<"Enter breadth of Rectangle : ";
            cin>>breadth;
            area = length*breadth;
            perimeter = 2*(length+breadth);

            cout<<"The  length and breadth of rectangle entered is : " <<length<<breadth<<endl;
            cout<<"The area of rectangle is : " <<area<<endl;
            cout<<"The perimeter of rectangle is : "<<perimeter<<endl;

            return 0;

        }