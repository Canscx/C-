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
	cout<<"������Բ�İ뾶:";
	cin>>r;
	cout<<"��������εĳ��Ϳ�:";
	cin>>a>>b;
	cout<<"���������ε����ױ߳�����:";
	cin>>m>>n>>h;
	cout<<endl;
	cout<<"Բ�����Ϊ:"<<area(r)<<endl;
	cout<<"���ε����Ϊ:"<<area(a,b)<<endl;
	cout<<"���ε����Ϊ:"<<area(m,n,h)<<endl;
}