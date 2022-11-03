#include<iostream.h>
#include<stdlib.h>
struct student
{
	int num;
	int grade;
	student *link;
};
student* creat(student*,int stu[][2]);
student* del1(student*);
student* del2(student*);
void print(student*);
void del_chain(student*);
void main()
{
	student *head1,*head2;
	head1=NULL;
	head2=NULL;
	int stu[11][2];
	for(int k=0;k<11;k++)
	{
		stu[k][0]=k+1;
		stu[k][1]=rand()%810+1;
	}
	head1=creat(head1,stu);
	print(head1);
	head1=del1(head1);
	if(head1)
		cout<<"民族希望：\n";
	print(head1);
	del_chain(head1);
	/**head2=creat(head2);
	del2=del2(head2);
	print(head2);
	print(d);
	del_chain(head2);
	del_chain(d);**/
}
student* creat(student*head,int stu[][2])
{
	head=new student;
	head->num=stu[0][0];
	head->grade=stu[0][1];
	student *p=head;
	for(int k=1;stu[k][0];k++)
	{
		student *p1=new student;
		p1->num=stu[k][0];
		p1->grade=stu[k][1];
		p->link=p1;
		p1->link=NULL;
		p=p1;
	}
	return head;
}
student* del1(student* head)
{
	student*d,*t;
	for(;head->grade<650;)
	{
		d=head;
		head=head->link;
		delete d;
	}
	student*p=head;
	for(;p;)
	{
		for(;p->grade<650;)
		{
			d=p;
			if(p->link)
			{
				p=p->link;
				delete d;
			}
			else 
			{
				p=NULL;
				delete d;
				t->link=NULL;
				return head;
			}
		}
		t=p;
		p=p->link;
	}
	return head;
}
void print(student* head)
{
	if(!head)
		cout<<"无成员\n";
	for(;head;head=head->link) 
	{
		cout<<"学生编号："<<head->num<<'\t';
		cout<<"成绩："<<head->grade<<'\n';
	}
}
void del_chain(student* head)
{
	if(!head)
		cout<<"对不起人民\n";
	for(;head;)
	{
		student *p=head;
		head=head->link;
		delete p;
	}
}