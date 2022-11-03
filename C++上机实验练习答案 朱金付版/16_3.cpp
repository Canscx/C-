#include<iostream.h>
#define N 20
class worker
{int num,pay,award,ap;
char name[N],sex;
public:
	worker(int a,char b[],char c)
	{num=a;
	for(int i=0;i<N;)name[i++]=b[i];
	sex=c;
	pay=0;
	award=0;
	ap=0;
	}
	void change(int a,int b)
	{pay=a;
	award=b;
	ap=a+b;
	}
	void print()
	{
		cout<<"姓名："<<name<<endl;
		cout<<"性别："<<sex<<endl;
		cout<<"工号："<<num<<endl;
		cout<<"基本工资："<<pay<<endl;
		cout<<"奖金："<<award<<endl;
		cout<<"总工资："<<ap<<endl;
	}
};
void main()
{
	char b[N];
	cin.getline(b,N);
	worker w1(21323333,b,'m');
	w1.change(5000,6000);
	w1.print();
}


