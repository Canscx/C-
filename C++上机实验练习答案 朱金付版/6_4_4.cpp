#include<iostream.h>
int f(int n,float x)
{
	float s;
	if(n>=0&&n<=1)
	{
		if(n==0)
			s=1;
		else
			s=x;
	}
	else
		s=((2*n-1)*x*f(n-1,x)-(n-1)*f(n-2,x))/n;
	return s;
}
void main()
{
	float x;
	int n;
	cin>>x>>n;
	cout<<f(n,x);
}