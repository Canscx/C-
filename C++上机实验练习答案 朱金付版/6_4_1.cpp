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
	cout<<"������һ��������";
	cin>>n;
	cout<<"������ʮ�������������Ϊ��";
	f(n);
	cout<<endl;
}