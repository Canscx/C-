#include<iostream.h>
#include<math.h>
int f(int x)
{
	int k,i;
	k=sqrt(x);
	for(i=2;i<=k;i++)
		if(x%i==0)break;
	if(i>=k+1)
		return 1;
	else
		return 0;
}
void main()
{
	int n;
	cout<<"请输入一大于2的偶数：";
	cin>>n;
	for(int j=2;j<=n/2;j++)
	{
		if(f(j)&&f(n-j))
		{
			cout<<n<<"="<<j<<"+"<<n-j<<endl;
		}
	}
}