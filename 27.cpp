//Problem 27
//Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
#include<iostream>
using namespace std;
int main()
{
   int x,y, sum;
   cout<<"Enter the first integer - ";
   cin>>x;
   cout<<"Enter the second integer - ";
   cin>>y;

   if(x==y)
   {
     sum = 3*(x+y);
     cout<<x<<" & "<<y<<" are same, hence the answer is triple their sum - "<<sum;
   }
   else{
     sum=x+y;
     cout<<" Sum of the two integers "<<x<<" & "<<y<<" is "<<sum;
   }
return 0;
}