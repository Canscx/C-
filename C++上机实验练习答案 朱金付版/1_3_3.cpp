#include<iostream.h>
void main()
{
	int a,b,c,tmax,tmin;
	cout<<"��������������"<<endl;
	cin>>a>>b>>c;
	tmax=a<b?b:a;
	tmin=a>b?b:a;
	if(c>tmax)
		cout<<"�м���Ϊ"<<tmax<<endl;
	else
	{
		if(c>tmin)
			cout<<"�м���Ϊ"<<c<<endl;
		else
			cout<<"�м���Ϊ"<<tmin<<endl;
	}

}