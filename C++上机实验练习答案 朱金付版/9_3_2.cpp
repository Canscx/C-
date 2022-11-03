#include<iostream.h>
#include<iomanip.h>
void input(int a[][5])
{
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	cout<<endl;
}
void bubble(int a[][5])
{
	int i,j,i1,j1,i2,j2,t,flag;
	flag=1;
	for(j=0;j<25&&flag;j++)
	{
		flag=0;
		for(i=0;i<25-j;i++)
		{
			i1=i/5;
			j1=i%5;
			i2=(i+1)/5;
			j2=(i+1)%5;
			if(a[i1][j1]>a[i2][j2])
			{
				t=a[i1][j1];
				a[i1][j1]=a[i2][j2];
				a[i2][j2]=t;
				flag=1;
			}
		}
	}
}
void main()
{
	int a[5][5];
	cout<<"请输入一个5*5数组:"<<endl;
	input(a);
	bubble(a);
	cout<<"排序后的数组为:"<<endl;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			cout<<setw(4)<<a[i][j];
		cout<<endl;
	}
}