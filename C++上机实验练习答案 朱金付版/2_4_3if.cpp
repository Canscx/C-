#include<iostream.h>
void main()
{
	int a;
	float b;
	cout<<"�������蹺����Ʒ��������"<<endl;
	cin>>a;
	if(a<50)
		b=a*10;
	else
	{
		if(a<100)
			b=a*10*0.95;
		else
		{
			if(a<200)
				b=a*10*0.9;
			else
				b=a*10*0.85;
		}
	}
	cout<<"��Ʒ�ܼ�Ϊ��"<<b<<endl;
}