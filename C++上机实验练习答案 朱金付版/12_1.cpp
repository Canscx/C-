#include<iostream.h>
class book
{ float sale;
  char name,wr,pu;
public:
	void input(float a,char b,char c,char d)
	{
		sale=a;
		name=b;
		wr=c;
		pu=d;
	}
	char output()
	{
		cout<<"������"<<sale<<" ���ߣ�"<<wr<<" ���ۣ�"<<sale<<" �����磺"<<pu<<"\n";
	}
};

void main()
{
	book bo[2];
	for(int i=0;i<2;i++)
	{
		float a;
		char b,c,d;
		cin>>a>>b>>c>>d;
		bo[i].input(a,b,c,d);
	}
	for(i=0;i<2;i++)
	{
		bo[i].output;
	}
}


