#include<iostream.h>
void f(int m)
{
	if(m>=12)
	{
		cout<<hex<<m%12;
		f(m/12);
	}
	else
		cout<<hex<<m;
}
void main()
{
	int n;
	cout<<"请输入一个整数：";
	cin>>n;
	cout<<"该数以十二进制逆序输出为：";
	f(n);
	cout<<endl;
}