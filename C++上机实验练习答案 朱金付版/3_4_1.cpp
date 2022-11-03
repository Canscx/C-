#include<iostream.h>
void main()
{
	int s,n;
	cout<<"请输入一个整数"<<endl;
	cin>>n;
	do
	{
		s=n%10;
		cout<<s;
		n=n/10;
	}while(n>0);
	cout<<'\n';
}