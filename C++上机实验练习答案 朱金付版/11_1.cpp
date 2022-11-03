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
		cout<<"请依次输入商品的编号、品名、单价、产品说明、生产日期";
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
	cout<<"最便宜的商品的编号为："<<Co[n].id;
	cout<<"最便宜的商品的品名为："<<Co[n].name;
	cout<<"最便宜的商品的单价为："<<Co[n].price;
	cout<<"最便宜的商品的产品说明如下："<<Co[n].inf;
	cout<<"最便宜的商品的生产日期为："<<Co[n].mdate.year<<" "<<Co[n].mdate.month<<" "<<Co[n].mdate.day<<endl;
}