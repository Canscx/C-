#include<iostream.h>
#include<iomanip.h>
#define N 10
void main()
{
	char a[2*N],b[N];
	cout<<"�����������ַ���������С��10��:"<<endl;
	cin.getline(a,2*N);
	cin.getline(b,N);
	cout<<endl<<a<<endl<<b<<endl;
	int i=0,j=0;	
	for(;a[i];i++);
	while(b[j])
		a[i++]=b[j++];
	a[i]='\0';
	cout<<"ƴ�ӵĽ��Ϊ��"<<a<<endl;
}

