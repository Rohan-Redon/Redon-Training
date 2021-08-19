#include<iostream>
using namespace std;
int main()
{
cout<<"Enter two numbers to be swapped:"<<endl;
int a,b;
cin>>a>>b;
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swap a= "<<a<<" b= "<<b<<endl;
}
