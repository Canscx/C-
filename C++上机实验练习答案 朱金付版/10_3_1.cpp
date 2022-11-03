#include<iostream.h>
void main()
{
	char a[20],b[20];
	cin.getline(a,20);
	cin.getline(b,20);
	cout<<a<<endl<<b<<endl;
	int i=0;
	while(b[i])
	{
		a[i]=b[i];
		i++;
	}
	cout<<a<<endl<<b<<endl;
}