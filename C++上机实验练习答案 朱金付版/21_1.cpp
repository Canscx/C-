#include<iostream.h>
class point
{
	int X,Y,Z;
public:
	point(int a=0,int b=0,int c=0)
	{
		X=a;Y=b;Z=c;
	}
	point operator+ (point &d)
	{
		point et;
		et.X=X+d.X;
		et.Y=Y+d.Y;
		et.Z=Z+d.Z;
		return et;
	}
	point operator-- ()
	{
		X=X-1;
		Y=Y-1;
		Z=Z-1;
		return *this;
	}
	friend point operator-- (point &,int);
	friend bool operator!= (point,point);
	void print()
	{
		cout<<"("<<X<<","<<Y<<","<<Z<<")"<<endl;
	}
};
point operator-- (point &d,int)
{
	point e=d;
	--d;
	return e;
}
bool operator!= (point d,point e)
{
	bool t=d.X!=e.X||d.Y!=e.Y||d.Z!=e.Z;
	return t;
}
void main()
{
	point p1(1,1,1),p2(1,1,1),p3(1,2,3),p4;
	p4=p1+p2;
	p4.print();
	if(p1!=p2)
		cout<<"p1!=p2";
	else cout<<"p1=p2";
	cout<<endl;
	if(p1!=p3)
		cout<<"p1!=p3"<<endl;
	else cout<<"p1=p3";
}


