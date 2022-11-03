#include<iostream.h>
void main()
{
	struct point
	{   float x,y;
	};
	point p[1];
	for(int i=0;i<2;i++)
	{
		cin>>p[i].x>>p[i].y;
	}
	float a,b;
	a=(p[1].x>p[0].x?(p[1].x-p[0].x):(p[0].x-p[1].x));
	b=(p[1].y>p[0].y?(p[1].y-p[0].y):(p[0].y-p[1].y));
	float area=a*b;
	cout<<area<<endl;
}




