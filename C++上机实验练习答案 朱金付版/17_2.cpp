#include<iostream.h>
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
	void output()
	{
		for(int i=0;i<Num;i++)
		{
			cout<<List[i]<<"\t";
			if(i%5==4)
				cout<<"\n";
		}
	}
};
void main()
{
	LineList L1(6);
	LineList L2(L1);
	L1.Add(6);
	L2.Add(5);
	L1.output();
	L2.output();
}

