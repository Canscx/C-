#include<iostream.h>
#include<string.h>
class Student
{
	int Num,age;
	float English,Math,Physic,CC;
	char Name[20],Sex[4];
public:
	Student(int A,int B,char *C,char *D,float E,float F,float G,float H)
	{
		Num=A;age=B;
		strcpy(Name,C);
		strcpy(Name,D);
		English=E;Math=F;Physic=G;CC=H;
	}
	operator float()
	{
		return (English+Math+Physic+CC)/4;
	}
};
void main()
{
	Student s(213,23,"yt","z",12,23,34,45);
	cout<<float(s);
}

