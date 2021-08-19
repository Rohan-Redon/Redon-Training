#include<iostream>
using namespace std;
int denominationres[7];
int main()
{
cout<<"Enter the amount to know its denomination in notes : ";
int amount;
cin>>amount;
int amount_copy=amount;
cout<<endl;
int denomination[]={500,100,50,20,10,5,1};
float temp;
for(int i=0;i<7;i++)
{
temp=amount_copy/denomination[i];
if(temp<1)
continue;
else
{
denominationres[i]=temp;
amount_copy-=(denomination[i]*denominationres[i]);
}
}
cout<<"The amount "<<amount<<" has been successfully divided into denominations: "<<endl;
for(int i=0;i<7;i++)
{
cout<<denomination[i]<<"\t"<<denominationres[i]<<endl;
}
}
