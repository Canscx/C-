#include<iostream.h>
double area(double radius)
{	
	return 3.14*radius*radius;
}
double area(double a,double b)
{
	return a*b;
}
double area(double a,double b,double h)
{
	return (a+b)*h/2;
}
void main()
{
	double r,a,b,m,n,h;
	cout<<"请输入圆的半径:";
	cin>>r;
	cout<<"请输入矩形的长和宽:";
	cin>>a>>b;
	cout<<"请输入梯形的两底边长及高:";
	cin>>m>>n>>h;
	cout<<endl;
	cout<<"圆的面积为:"<<area(r)<<endl;
	cout<<"矩形的面积为:"<<area(a,b)<<endl;
	cout<<"梯形的面积为:"<<area(m,n,h)<<endl;
}