//Problem 25
//Write a program in C++ that takes a number as input and prints its multiplication table upto 10.

#include<iostream>
#include<iomanip>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter a number to get its miltiplication table : ";
            cin>>n;
            cout<<endl;

            for(int i =1; i<=10; i++)
                {
                    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
                }
                
        return 0;
        }