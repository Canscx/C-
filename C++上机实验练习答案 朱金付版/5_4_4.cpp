#include<iostream.h>
void f(int a,int b,int c)
{
	int tmax,tmin;
	tmax=a>b?a:b;
	tmin=a<b?a:b;
	if(c>tmax)
		cout<<tmin<<'\t'<<tmax<<'\t'<<c<<endl;
	else
	{
		if(c<tmin)
			cout<<c<<'\t'<<tmin<<'\t'<<tmax<<endl;
		else
			cout<<tmin<<'\t'<<c<<'\t'<<tmax<<endl;
	}
}
void main()
{
	int a,b,c;
	cout<<"请输入三个整数:";
	cin>>a>>b>>c;
	f(a,b,c);
}