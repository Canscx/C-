#include<iostream.h>
#include<string.h>
#define N 20
class list
{
	char name[N],phone[N];
	char *address;
public:
	list(char a[],char b[],char *c=0)
	{
		strcpy(name,a);
		strcpy(phone,b);
		address=new char[strlen(c)+1];
		if(c==0)
			address=0;
		else
		{
			strcpy(address,c);
			cout<<"�����˹��캯��\n";
		}
	}
	list(const list& l1)
	{
		strcpy(name,l1.name);
		strcpy(phone,l1.phone);
		if(l1.address)
		{
			address=new char[strlen(l1.address)+1];
			strcpy(address,l1.address);
		}
	}
	void output()
	{
		cout<<"����:"<<"\t"<<name<<'\n';
		cout<<"����:"<<"\t"<<phone<<'\n';
		cout<<"��ַ:"<<"\t"<<address<<'\n';
	}
	~list()
	{
		delete[]address;
		cout<<"��������������"<<"\n";
	}
};
void main()
{
	list t1("skt","213213","t1");
	list t2(t1);
	t1.output();
	t2.output();
}