#include<iostream.h>
void main()
{
	float a[10];
	float *p;
	float ave,sum=0;
	int i;
	cout<<"请输入十个实数：";
	for(i=0,p=a;i<10;i++)
	{
		cin>>*p;
		sum+=*p++;
	}
	ave=sum/10;
	cout<<"该组数的和为："<<sum<<endl;
	cout<<"该数组的平均值为："<<ave<<endl;
}