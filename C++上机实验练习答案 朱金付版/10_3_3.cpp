#include<iostream.h>
#define N 20
int del(char a[])
{
	int num=0;
	for(int i=0;a[i];i++)
	{
		for(int j=i+1;a[j];j++)
		{
			if(a[i]==a[j])
			{
				for(int m=j;a[m];m++)
				     a[m]=a[m+1];
				num+=1;
				i--;
			}
		}
	}
	return num;
}
void main()
{
	char s[N];
	cout<<"请输入一段字符（长度小于10）:"<<endl;
	cin.getline(s,N);
	cout<<"删除的字符数为："<<del(s)<<endl;
	cout<<"删除后的字符串为："<<s<<endl;
}
