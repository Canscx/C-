#include<iostream.h>
void main()
{
	struct date
	{int year,month,day;};
	struct  Co
	{
		int id;
		char name[20];
		float price;
		char inf[50];
		date mdate;
	};
	Co Co[10];
	for(int i=0;i<10;i++)
	{
		cout<<"������������Ʒ�ı�š�Ʒ�������ۡ���Ʒ˵������������";
		cin>>Co[i].id;
		cin.getline(Co[i].name,20);
		cin>>Co[i].price;
		cin.getline(Co[i].inf,50);
		cin>>Co[i].mdate.year;
		cin>>Co[i].mdate.month;
		cin>>Co[i].mdate.day;
	}
	int n=0;
	float m=Co[0].price;
	for(int p=1;p<10;p++)
	{
		if(Co[p].price<m)
		{
			n=i;
			m=Co[p].price;
		}
	}
	cout<<"����˵���Ʒ�ı��Ϊ��"<<Co[n].id;
	cout<<"����˵���Ʒ��Ʒ��Ϊ��"<<Co[n].name;
	cout<<"����˵���Ʒ�ĵ���Ϊ��"<<Co[n].price;
	cout<<"����˵���Ʒ�Ĳ�Ʒ˵�����£�"<<Co[n].inf;
	cout<<"����˵���Ʒ����������Ϊ��"<<Co[n].mdate.year<<" "<<Co[n].mdate.month<<" "<<Co[n].mdate.day<<endl;
}