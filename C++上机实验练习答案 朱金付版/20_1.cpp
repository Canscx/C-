#include<iostream.h>
#define pi 3.1415926535
class point
{
	double x,y;
public:
	point(double a,double b)
	{
		x=a;
		y=b;
	}
	virtual void print()
	{
		cout<<"坐标为："
			<<"("<<x<<","<<y<<")";
	}
};
class circle:public point
{
	double R;
public:
	circle(double a,double b,double c):point(a,b)
	{
		R=c;
	}
	double area()
	{
		return pi*R*R;
	}
	virtual void print()
	{
		cout<<"\n半径为："<<R;
	}
};
class cy:public circle
{
	double H;
public:
	cy( double a,double b,double c,double d):circle(a,b,c)
	{
		H=d;
	}
	double V()
	{
		return H*area();
	}
	void print()
	{
		cout<<"\n高为："<<H
			<<"\n面积为："<<area()
			<<"\n体积为："<<V()<<endl;
	}
};
void main()
{
	point p(1,1);
	p.print();
	circle c(1,1,3);
	c.print();
	cy o(1,1,3,7);
	o.print();
}
