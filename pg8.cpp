#include<iostream>
using namespace std;
int main()
{
cout<<"Enter three numbers to determine the largest:"<<endl;
int n1,n2,n3;
cin>>n1>>n2>>n3;
(n1>n2)?(n1>n3?cout<<"The largest no is :"<<n1<<endl:cout<<"The largest no is :"<<n3<<endl):(n2>n3?cout<<"The largest number is :"<<n2<<endl:cout<<"The largest number is :"<<n3<<endl);
}
