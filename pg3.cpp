#include<iostream>
using namespace std;
int main()
{
cout<<"Enter the three values Principle Intrest\tRate of Intrest\t\tTime for calculating Simple Intrest:"<<endl;
int p,t,r,si;
cin>>p>>t>>r;
si=(p*t*r)/100;
cout<<"The SI for P= "<<p<<" T= "<<t<<" R= "<<r<<" is : "<<si<<endl;
}
