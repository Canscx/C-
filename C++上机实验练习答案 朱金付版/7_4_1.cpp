#include<iostream.h>
#define s(a,b,h) (a+b)*h/2
void main()
{
	float a,b,h;
	cout<<"请输入梯形的两条底边长及高:";
	cin>>a>>b>>h;
	cout<<"该梯形的面积为:"<<s(a,b,h)<<endl;
}