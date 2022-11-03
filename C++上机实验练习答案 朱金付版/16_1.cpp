#include<iostream.h>
class date
{int year,month,day;
public:
	date(int a,int b,int c)
	{year=1995;
	month=2;
	day=13;
	}
	void print()
	{
		cout<<year<<"-"<<month<<"-"<<day<<endl;
	}
};
void main()
{
	date d1(1,2,3);
	d1.print();
}