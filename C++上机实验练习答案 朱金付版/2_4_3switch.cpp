#include<iostream.h>
void main()
{
	int a;
	float b;
	cout<<"�������蹺����Ʒ��������"<<endl;
	cin>>a;
	switch(a/50)
	{
	case 0: b=a*10;break;
	case 1: b=a*10*0.95;break;
	case 2: b=a*10*0.9;break;
	default:b=a*10*0.85;
	}
	cout<<"����Ʒ�ܼ�Ϊ��"<<b<<endl;
}