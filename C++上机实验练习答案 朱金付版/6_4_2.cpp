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
	cout<<"请输入两个整数：";
	cin>>a>>b;
	cout<<"这两个数的最大公约数为："<<f(a,b)<<endl;
}