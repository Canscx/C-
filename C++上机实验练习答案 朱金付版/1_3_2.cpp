#include<iostream.h>
void main()
{
	int a,b,c,n;
	cout<<"请输入一个三位整数"<<endl;
	cin>>n;
	a=n/100;
	b=n%10;
	c=(n/10)%10;
	cout<<"百位数为："<<a<<endl;
	cout<<"十位数为："<<c<<endl;
	cout<<"个位数为："<<b<<endl;
}
