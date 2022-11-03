#include<iostream.h>
void main()
{
	int n;
	cout<<"请输入需要计算的序列项数："<<endl;
	cin>>n;
	double t,a=2,b=1;
	double s=0;
	for(int i=1;i<=n;i++)
	{
		s+=a/b;
		t=b;
		b=a;
		a=a+t;
	}
	cout<<"该分数序列的前"<<n<<"项和为："<<s<<endl;
}