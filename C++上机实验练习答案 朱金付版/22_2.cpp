#include<iostream.h>
#include<string.h>
class String
{
protected:
	char *Str;
public:
	String(){Str=0;}
	String(String &);
	String(char*s)
	{
		Str=new char[strlen(s)+1];
		strcpy(Str,s);
	}
	~String(){if(Str)delete[]Str;}
	void show(){cout<<Str<<"\n";}
	String&operator=(String&n)
	{
		if(n.Str)
		{
			Str=new char[strlen(n.Str)+1];
			strcpy(Str,n.Str);
		}
		else Str=0;
		return *this;
	}
	friend String &operator+=(String &,String &);
	friend String &operator-=(String &,String &);
	friend int &operator==(String &,String &);
	operator int()
	{
		if(Str)
		{
			int k=0,i=0,n=strlen(Str);
			while(i<n)
			{
				for(;Str[i]==' ';i++)
				{
					if(i==n-1)
						return k;
				}
				k++;
				for(;Str[i]!=' ';i++)
				{
					if(i==n-1)
						return k;
				}
			}
			return k;
		}
	}
};
String::String(String &s)
{
	if(s.Str)
	{
		Str=new char[strlen(s.Str)+1];
		strcpy(Str,s.Str);
	}
	else Str=0;
}
String &operator+=(String &s1,String &s2)
{
	String t;
	t.Str=new char[strlen(s1.Str)+strlen(s2.Str)+1];
	strcpy(t.Str,s1.Str);
	strcat(t.Str,s2.Str);
	s1=t;
	return s1;
}
String &operator-=(String &s1,String &s2)
{
	String t1=s1;
	char*p;
	while(1)
	{
		if(p=strstr(t1.Str,s2.Str))          //strstr() 函数搜索一个字符串在另一个字符串中的第一次出现的位置，返回值为其首地址
		{
			if(strlen(t1.Str)==strlen(s2.Str))
			{
				delete[]t1.Str;
				t1.Str=0;
				break;
			}
			String t2;
			t2.Str=new char[strlen(t1.Str)-strlen(s2.Str)+1];
			char *p1=t1.Str,*p2=t2.Str;
			int i=strlen(s2.Str);
			while(p1<p)*p2++=*p1++;
			while(i){p1++;i--;};
			while(*p2++=*p1++);
			t1=t2;
		}
		else break;
	}
	s1=t1;
	return s1;
}
void main()
{
	String Str1("m kd s"),Str2(" sdd sd df se "),Str3(Str1),Str4;
	Str4=Str2;
	cout<<int(Str1)<<'\t'
		<<int(Str2)<<'\t'
		<<int(Str3)<<'\t'
		<<int(Str4)<<'\n';
}
