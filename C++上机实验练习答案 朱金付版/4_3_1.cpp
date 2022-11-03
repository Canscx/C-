#include<iostream.h>
int f(int x)
{
	int s=0;
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
			s+=i;
	}
	return s;
}
void main()
{
	for(int p=3;p<=400;p++)
		if(f(p)==p)
			cout<<p<<endl;
}