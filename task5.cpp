#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
main()
{
  float hours,minutes;
  cout<<"Enter hours:";
  cin>>hours;
  cout<<"Enter minutes:";
  cin>>minutes;
  float time_in_sec=(hours*3600)+(minutes*60)+960;
  int time_in_hour=time_in_sec/3600;
  float total_hours=ceil(time_in_hour);
  float time_in_min=total_hours*3600;
  float sec=time_in_sec-time_in_min;
  float total_minutes=sec/60;
  cout<<"Time is:"<<total_hours<<":"<<total_minutes;
} 
 