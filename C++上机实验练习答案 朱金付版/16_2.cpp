#include<iostream.h>
class Num
{int a[10];
public:
	Num(int b[])
	{ 
		for(int i=0;i<10;)a[i++]=b[i];
	}
	void print()
	{
		for(int j=0;j<10;j++)
		{
			cout<<a[j]<<'\t';
			if(j%5==4)
				cout<<'\n';
		}
	}
	void search(int n)
	{
		for(int k=0;k<10;k++)
		{
			if(a[k]==n)
				cout<<k+1<<'\n';
		}
	}
};
void main()
{
	int b[10];
	for(int i=0;i<10;i++)
		cin>>b[i];
	Num N1(b);
	N1.print();
	N1.search(5);
}

