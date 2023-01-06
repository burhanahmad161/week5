#include<iostream>
#include<cmath>
using namespace std;
bool isTrue(int);
main()
{
int num;
cout<<"enter a three digit number:";
cin>>num;
num=isTrue(num);
}
bool isTrue(int num)
{
  int hundred=num/100;
  int ten=num%10l;
  if(hundred==ten)
   {
	 cout<<"it is Symmetric";
   }
   if(hundred!=ten)
   {
    cout<<"it is not Symmetric";
   }
}