#include<iostream.h>
void main()
{
	int s=0,p=0,q=0;
	int a[10];
	cout<<"请输入10个数据:"<<endl;
	for(int i=0;i<10;i++)
	{	
		cin>>a[i];
		if(a[i]>0)
			s++;
		if(a[i]<0)
			p++;
		if(a[i]==0)
			q++;
	}
	cout<<endl;
	cout<<"该数组中正数的个数为:"<<s<<endl;
	cout<<"该数组中负数的个数为:"<<p<<endl;
	cout<<"该数组中零的个数为:"<<q<<endl;
}