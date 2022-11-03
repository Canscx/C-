#include<iostream.h>
#include<stdlib.h>
#include<string.h>
class LineList
{
	float *List;
	int Max,Num;
public:
	LineList(int n=10)
	{
		List=new float[n];
		Max=n;
	    Num=0;
	}
	LineList(const LineList &l)
	{
		Max=l.Max;
		Num=l.Num;
		List=new float[l.Max];
		for(int i=0;i<Num;i++)
			List[i]=l.List[i];
	}
	~LineList()
	{
		delete[]List;
	}
	void Add(float x)
	{
		if(Num<Max)
			List[Num++]=x;
		else
		{
			float *list;
			list=new float[Max+5];
			for(int i=0;i<Num;i++)list[i]=List[i];
			delete List;
			Max=Max+5;
			List=list;
			List[Num++]=x;
		}
	}
	LineList operator+(LineList &l)
	{
		int i,j;
		LineList t;
		t.Max=Max+l.Max;
		t.List=new float[t.Max];
		t.Num=Num+l.Num;
		for(i=0;i<Num;i++)t.List[i]=List[i];
		for(j=0;j<l.Num;j++)t.List[i++]=l.List[j];
		return t;
	}
	int In(LineList &l,float x)
	{
		for(int i=0;i<l.Num;i++)
			if(l.List[i]==x)return 1;
		return 0;
	}
	LineList operator-(LineList &l)
	{
		int i=0,j=0;
		LineList t=*this;
		while(i<t.Num)
		{
			if(In(l,t.List[i]))
			{
				for(j=i+1;j<t.Num;j++)
					t.List[j-1]=t.List[j];
				t.Num--;
			}
			else i++;
		}
		return t;
	}
	LineList &operator=(LineList &l)
	{
		if(this==&l)return *this;
		delete []List;
		Max=l.Max;
		Num=l.Num;
		List=new float[l.Max];
		for(int i=0;i<Num;i++)List[i]=l.List[i];
		return *this;
	}
	void output()
	{
		for(int i=0;i<Num;i++)
		{
			cout<<List[i]<<"\t";
			if(i%5==4)
				cout<<"\n";
		}
		if(Num%5!=4)
			cout<<'\n';
	}
};
void main()
{
	LineList l1,l2,l3;
	for(int i=0;i<13;i++)
	{
		l1.Add(rand());
		l2.Add(rand());
	}
	l3=l1+l2;
	l1.output();
	l2.output();
	l3.output();
}
	

