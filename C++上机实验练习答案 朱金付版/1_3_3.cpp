#include<iostream.h>
void main()
{
	int a,b,c,tmax,tmin;
	cout<<"请输入三个整数"<<endl;
	cin>>a>>b>>c;
	tmax=a<b?b:a;
	tmin=a>b?b:a;
	if(c>tmax)
		cout<<"中间数为"<<tmax<<endl;
	else
	{
		if(c>tmin)
			cout<<"中间数为"<<c<<endl;
		else
			cout<<"中间数为"<<tmin<<endl;
	}

}