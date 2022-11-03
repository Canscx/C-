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
		cout<<"����Ϊ��"
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
		cout<<"\n�뾶Ϊ��"<<R;
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
		cout<<"\n��Ϊ��"<<H
			<<"\n���Ϊ��"<<area()
			<<"\n���Ϊ��"<<V()<<endl;
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
