#include<iostream.h>
void main()
{
	int s=0,p=0,q=0;
	int a[10];
	cout<<"������10������:"<<endl;
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
	cout<<"�������������ĸ���Ϊ:"<<s<<endl;
	cout<<"�������и����ĸ���Ϊ:"<<p<<endl;
	cout<<"����������ĸ���Ϊ:"<<q<<endl;
}