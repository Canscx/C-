#include<iostream.h>
#define N 20
class goods
{char name[N];
 float pri=0,num=0,pay;
public:
	void def(char a[],float b)
	{
		cin.getline(a,N);
		cin>>b;
		for(int i=0;a[i];)
		name[i++]=a[++];
		pri=b;
	}
	void sale(float c)
	{
		cin>>c;
		num=c;
		pay=c*pri;
	}
	void output()
	{
		if(pri==0)
			cout<<"undefined"<<endl;
		else if(num==0)
			cout<<"price:"<<pri<<" name:"<<name<<"NO sales"<<endl;
		esle
			cout<<"name"<<name<<"price"<<pri<<"number"<<num<<"pay"<<pay<<endl;
	}
};
void main()
{
	goods gg[N];
    for(int k=0;k<10;k++)
	{
	   gg[k].def;
	}
	gg[0].sale(6);
	for(int m=0;m<15;m++)
	{
		gg[m].output;
	}
}


