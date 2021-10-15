//Problem 22
//Write a program in C++ to compute quotient and remainder

#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
    int main()
            {
                int dividend, divisor, quotient, remainder;

                cout<<"Enter the Dividend : ";
                cin>>dividend;
                cout<<endl<<"Enter the Divisor : ";
                cin>>divisor;

                quotient = dividend/divisor;
                remainder = dividend%divisor;

                cout<<endl<<"On dividing "<<dividend<<" with "<<divisor<< " we get a quotient = "<<quotient<<" & a remainder = "<<remainder<<endl;

                return 0;
            }

