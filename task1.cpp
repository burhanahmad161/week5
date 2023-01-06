#include<iostream>
#include<cmath>
using namespace std;
float heigh(float distance,float degree,float height);
main()
{
float base=43;
float degree;
float height;
cout<<"height is:"<<height;
float height1=heigh(base,degree,height);
cout<<"height is"<<height1;
}
float heigh(float distance,float degree,float height)
{
float radian=57.2985;
float radians=degree/radian;
float angle=tan(radians);
float height1=angle*distance;
return height1;
}
