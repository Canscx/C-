#include<iostream.h>
struct node
{
	int num;
	node *link;
};
node *insert(node **head,int x)
{
	node *p2,*p1;
	p1=new node;
	p2=*head;
	p1->num=x;
	if(!*head)
	{
		*head=p1;
		(*head)->link=NULL;
	}
	else if(x<=p2->num)
	{
		*head=p1;
		p1->link=p2;
	}
	else
	{
		int k=1;
		while(k)
		{
			k=0;
			if(p2->link)
				if(x>p2->link->num)
				{
					p2=p2->link;
					k=1;
				};
		}
		if(p2->link)
		{
			node *p;
			p=p2->link;
			p2->link=p1;
			p1->link=p;
		}
		else
		{
			p2->link=p1;
			p1->link=NULL;
		}
	}
	return *head;
}
void print(node *l)
{
	if(!l)
		cout<<"NONE";
	for(;l;)
	{
		cout<<(l->num)<<'\t';
		l=l->link;
	}
}
void del(node *l)
{
	for(;l;)
	{
		node *t=l->link;
		delete l;
		l=t;
	}
}
void main()
{
	node *p0;
	p0=NULL;
	for(int k=1;k;)
	{
		int a;
		cin>>a;
		if(a>=0)
			insert(&p0,a);
		else k=0;
	}
	print(p0);
	del(p0);
	cout<<endl;
}
