#include<iostream.h>
#include<math.h>
#include<iomanip.h>
int check(int m)
{
	int i,k;
	k=sqrt(m);
	for(i=2;i<=k;i++)
		if(m%i==0)break;
	if(i>=k+1)
		return 1;
	else
		return 0;
}
void main()
{
	for(int j=2;j<=400;j++)
	{
		int n=0;
		if(check(j))
		{
			n=n+1;
			cout<<setw(4)<<j;
			if(n%5==0)
				cout<<'\n';
		}
	}
	cout<<endl;
}