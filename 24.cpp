//Problem 24
//Write a program in C++ to check whether a number is positive, negative or zero. 

#include<iostream>
#include<iomanip>
using namespace std;
    int main()
        {
            int n;
            cout<<"Enter  a number : ";
            cin>>n;

            if (n<0)
                {
                    cout<<n<<" is Negative"<<endl;
                }
            if(n==0)
                {
                    cout<<n<<" is Zero";
                }
            if(n>0)
                {
                    cout<<n<<" is Positive"<<endl;
                }
        return 0;
        }