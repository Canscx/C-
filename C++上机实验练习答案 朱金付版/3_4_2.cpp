#include<iostream.h>
void main()
{
	int n;
	cout<<"请输入需要输出星号的行数"<<endl;
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		for(int p=n-i;p>=0;p--)
			cout<<" ";
		for(int s=1;s<=2*i-1;s++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;
}