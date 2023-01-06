#include<iostream>
using namespace std;
int oddish(int);
int evenish(int);
main()
{
int sum,num,a,b,c,d,e;
cout<<"enter five digit number";
cin>>a,b,c,d,e;
sum=a+b+c+d+e;
sum=oddish(sum);
sum=evenish(sum);
}
int oddish(int sum)
{
 if(sum%2==1)
	{
	  cout<<"It is Oddish"<<sum;
	  return sum;
	}
}

int evenish(int sum)
{
 if(sum%2==0)
	{
	  cout<<"It is Eveish"<<sum;
	  return sum;
	}
return 0;
}
