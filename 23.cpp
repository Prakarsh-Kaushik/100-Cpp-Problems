//Probelm 23
//Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows

#include<iostream>
#include<iomanip>
using namespace std;
    int main()
        {
            int i, j, n;

            cout<<"Enter a number : ";
            cin>>n;

            for(i=0;i <6; i++)
                {
                    for(j=0; j<4; j++)
                        {
                            cout<<n;
                        }
                        cout<<endl;
                }
        return 0;
        }