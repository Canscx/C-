#include<iostream.h>
int f (int m,int n)
{
	int r;
	r=m%n;
	if(r==0)
		return n;
	else
		f(n,r);
}
void main()
{
	int a,b;
	cout<<"����������������";
	cin>>a>>b;
	cout<<"�������������Լ��Ϊ��"<<f(a,b)<<endl;
}