#include<iostream.h>
void input(int a[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
}
void sum(int a[5][5])
{
	int s=0;
	for(int i=0;i<5;i++)
		s+=a[i][i];
	cout<<"���Խ����ϸ�Ԫ��֮��Ϊ:"<<s<<endl;
}
void max(int a[5][5])
{
	int i,j,r,c;
	r=0,c=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(a[i][j]>a[r][c])
				r=i;
	cout<<"�������е����ֵΪ:"<<a[r][c]<<endl;
	cout<<"�������к�Ϊ:"<<r<<endl;
}
void main()
{
	int a[5][5];
	cout<<"������һ��5*5������:"<<endl;
	input(a);
	sum(a);
	max(a);
}