#include<iostream.h>
void main()
{
	int n;
	cout<<"������һ������"<<endl;
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
		cout<<"����Ϊ������"<<endl;
	else
		cout<<"�������ǽ�����"<<endl;
}