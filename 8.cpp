//Problem 8 C++(Hackerrank)
//Write a program in C++ to calculate the volume of a cube

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
    int main()
        {
            float side;
            cout<<"Enter the side of cube : "<<endl;
            cin>>side;

            float volume =  pow(side,3);
            cout<<"Volume of Cube with side "<<fixed<<setprecision(3)<<side<<" is = "<<volume<<endl;

            return 0;
        }