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
	cout<<"主对角线上各元素之和为:"<<s<<endl;
}
void max(int a[5][5])
{
	int i,j,r,c;
	r=0,c=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(a[i][j]>a[r][c])
				r=i;
	cout<<"该数组中的最大值为:"<<a[r][c]<<endl;
	cout<<"其所在行号为:"<<r<<endl;
}
void main()
{
	int a[5][5];
	cout<<"请输入一个5*5的数组:"<<endl;
	input(a);
	sum(a);
	max(a);
}