#include<iostream.h>
void main()
{
	int i,s=0;
	for(i=1;s<10000;i++)
		s+=i*i;
	i=i-1;
	cout<<i<<endl;
}