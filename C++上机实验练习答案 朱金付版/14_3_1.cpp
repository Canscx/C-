#include<iostream.h>
#define N 100
int f(int m)
{
	for(int i=2;i<m/2;i++)
	{
		if(m%i==0)
			return 0;
	}
	return 1;
}
void main()
{
	int b[N],n,j=0;
	for(int m=2;m<N;m++)
	{
		if(f(m)==1)
			b[j++]=m;
	}
	cout<<"请输入需要分解的数：";
	cin>>n;
	cout<<"n=";
	for(int i=0;i<=j&&b[i]<=n;i++)
	{
		if(n%b[i]==0)
		{
			cout<<" "<<b[i];
			n=n/b[i];
			i--;
		}
	}
	cout<<endl;
}