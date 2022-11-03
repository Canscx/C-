#include<iostream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<time.h>
#define N 30
void main()
{
	int a[N];
	int i,r,b,s=0;
	srand(unsigned(time(0)));
	for(i=0;i<N;i++)
	{
		a[i]=rand()%101;
		s+=a[i];
	}
	r=s/30;
	b=r*0.8;
	cout<<"不及格学生的成绩为:";
	for(int j=0;j<N;j++)
	{
		if(a[j]<b)
			cout<<setw(4)<<a[j];
	}
	cout<<endl;
}