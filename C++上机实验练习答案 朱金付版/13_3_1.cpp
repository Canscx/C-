#include<iostream.h>
void main()
{
	float a[10];
	float *p;
	float ave,sum=0;
	int i;
	cout<<"������ʮ��ʵ����";
	for(i=0,p=a;i<10;i++)
	{
		cin>>*p;
		sum+=*p++;
	}
	ave=sum/10;
	cout<<"�������ĺ�Ϊ��"<<sum<<endl;
	cout<<"�������ƽ��ֵΪ��"<<ave<<endl;
}