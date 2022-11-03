#include<iostream.h>
void main()
{
	int a,b,c,tmax,tmin;
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c;
	tmax=a>b?a:b;
	tmin=a<b?a:b;
	if(c>tmax)
	{
		if(a>b)
			cout<<b<<'\t'<<a<<'\t'<<c<<'\t';
		else
			cout<<a<<'\t'<<b<<'\t'<<c<<'\t';
	}
	else
	{
		if(c<tmin)
			cout<<c<<'\t'<<tmin<<'\t'<<tmax<<'\t';
		else
			cout<<tmin<<'\t'<<c<<'\t'<<tmax<<'\t';
	}
}