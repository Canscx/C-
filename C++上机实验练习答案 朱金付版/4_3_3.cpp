#include<iostream.h>
void main()
{
	int n;
	cout<<"��������Ҫ���������������"<<endl;
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
	cout<<"�÷������е�ǰ"<<n<<"���Ϊ��"<<s<<endl;
}