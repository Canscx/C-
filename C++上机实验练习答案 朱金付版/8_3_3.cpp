#include<iostream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<time.h>
void main()
{
	int a[10];
	srand(unsigned(time(0)));
	for(int i=0;i<10;i++)
	{
		a[i]=rand()%101;
		cout<<setw(4)<<a[i];
	}
	int t,n=10;
	for(int j=0;j<n;j++)
		for(int s=n-1;s>j;s--)
			if(a[s]>a[s-1])
			{
				t=a[s];
				a[s]=a[s-1];
				a[s-1]=t;
			}
	cout<<endl;
	for(int p=0;p<10;p++)
		cout<<setw(4)<<a[p];
	cout<<'\n';
}