#include<iostream.h>
#define N 10
void input(int a[])
{
	int *p;
	for(p=a;p<a+N;p++)
		cin>>*p;
}
void in(int a[],int b[],int c[])
{
	int *p1,*p2,*p3;
	p3=c;
	for(p1=a;p1<a+N;p1++)
	{
		for(p2=b;p2<b+N;p2++)
		{
			if(*p2==*p1)
				*p3++=*p1;
		}
	}
}
void output(int a[])
{
	int *p;
	for(p=a;p<a+N;p++)
		cout<<*p<<" ";
}
void main()
{
	int a[N],b[N],c[N];
	input(a);
	input(b);
	in(a,b,c);
	output(c);
}