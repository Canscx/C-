#include<iostream.h>
#define pi 3.1415
class circle
{
	double r;
public:
	circle(double a)
	{
		r=a;
	}
	double area()
	{
		return pi*r*r;
	}
	double cr()
	{
		return r;
	}
};
class Cy:public circle
{
	double H;
public:
	Cy(double a,double b):circle(a)
	{
		H=b;
	}
	double V()
	{
		return H*area();
	}
	void print()
	{
		cout<<"Բ�뾶:"<<cr()<<'\t'
			<<"��:"<<H<<'\t'
			<<"���Ϊ:"<<area()<<'\t'
			<<"���Ϊ:"<<V()<<'\t';
	}
};
void main()
{
	Cy c(10,20);
	c.print();
}
