#include<iostream.h>
class student
{
	int id;
	char name[20];
	char sex[4];
	int age;
public:
	student(int a ,char *b,char *c,int d)
	{
		id=a;
		for(int i=0;*b;name[i++]=*b++);
		name[i]=0;
		for(i=0;*c;sex[i++]=*c++);
		sex[i]=0;
		age=d;
	}
	virtual void print()=0;
	void print1()
	{
		cout<<"学号："<<id
			<<"\t姓名："<<name
			<<"\t性别："<<sex
			<<"\t年龄："<<age;
	}
};
class boshi:public student
{
	int work;
	int paper;
public:
	boshi(int a ,char *b,char *c,int d,int e,int f):student(a,b,c,d)
	{
		work=e;
		paper=f;
	}
	void print()
	{
		print1();
		cout<<"\n科研工作量："<<work
			<<"\t论文数："<<paper<<endl;
	}
};
class shuoshi:public student
{
	float grade;
	bool project;
public:
	shuoshi(int a ,char *b,char *c,int d,float e,bool f):student(a,b,c,d)
	{
		grade=e;
		project=f;
	}
	void print()
	{
		print1();
		cout<<"\n考核成绩："<<grade
			<<"\t是否参加科研:"<<project<<endl;
	}
};
class ben:public student
{
	float ing;
	float outg;
public:
	ben(int a ,char *b,char *c,int d,float e,float f):student(a,b,c,d)
	{
		ing=e;
		outg=f;
	}
	void print()
	{
		print1();
		cout<<"\n课内学分："<<ing
			<<"\t课外学分"<<outg<<endl;
	}
};
void main()
{
	boshi b1(110,"小明","?",38,3,2);
	b1.print();
	shuoshi s1(110,"小明","?",38,3.2,0);
	s1.print();
	boshi b2(110,"小明","?",38,3,3);
	b2.print();
}