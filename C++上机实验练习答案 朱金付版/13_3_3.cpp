#include<iostream.h>
#define N 5
void main()
{
	char a[N],b[2*N],*p1,*p2;
	for(p1=a;p1<a+N;p1++)
		cin>>*p1;
	for(p2=b+N;p2<b+2*N;p2++)
		*p2=*--p1;
	for(p2=b;p2<b+N;p2++)
		*p2=*p1++;
	for(p2=b;p2<b+2*N;p2++)
		cout<<*p2;
	cout<<endl;
}