#include<iostream.h>
int f(int x)
{
	int s=0,i=2;
	do
	{
		if(x%i==0)
		{
			s+=i;
			x=x/i;
		}
		else
			i++;
	}while(i<=x);
	return s;
}
void main()
{
	int n;
	cout<<"������һ��������>1��:";
	cin>>n;
	cout<<"������������֮��Ϊ��"<<f(n)<<endl;
}