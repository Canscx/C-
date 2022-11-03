#include<iostream.h>
void main()
{
	int n;
	cout<<"请输入一整数："<<endl;
	cin>>n;
	int t=0;
	do
	{
		if(n%10>t)
		{
			t=n%10;
			n=n/10;
		}
		else
		break;
	}while(n>0);
	if(n==0)
		cout<<"该数为降序数"<<endl;
	else
		cout<<"该数不是降序数"<<endl;
}