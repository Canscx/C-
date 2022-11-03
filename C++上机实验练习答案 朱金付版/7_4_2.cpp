#include<iostream.h>
int fib()
{
	int t;
	static int t1,t2;
	if(t2==0)
	{
		t2=1;
		t=t1+t2;
	}
	else
	{
		t=t1+t2;
		t1=t2;
		t2=t;
	}
	return t;
}
void main()
{
	for(int i=1;;i++)
		cout<<fib()<<"  ";
}