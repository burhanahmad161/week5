#include<iostream>
#include<cmath>
using namespace std;
float poisitveQuad(int a,int b,int c);
float negativeQuad(int a,int b,int c);
main()
{
    float quad1,quad2;
    int a=5;
    int b=6;
    float c=1;
    quad1=poisitveQuad(a,b,c);
    cout<<"Quad is:"<<quad1<<endl;
    quad2=negativeQuad(a,b,c);
    cout<<"Quad is:"<<quad2<<endl;
}
float negativeQuad(int a,int b,int c)
{
  float power=pow(b,2);
  float mult=4*a*c;
  float subtr=power-mult;  
  float square=sqrt(subtr);
  float num=-b-square;
  float d=2*a;  
  float quad1=num/d;	
  return quad1;
}
float poisitveQuad(int a,int b,int c)

{
  float power=pow(b,2);
  float 	mult=4*a*c;
  float add=power-mult;  
  float square=sqrt(add);
  float num=-b+square;
  float d=2*a;   
  float quad2=num/d;	
  return quad2;
}