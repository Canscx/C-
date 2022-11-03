#include<iostream.h>
#include<math.h>
void main()
{
	double x,s,t,n;
	cout<<"请输入需要求cos近似值的数："<<endl;
	cin>>x;
	t=1;
	n=1;
	for(s=1;t>=0.00001;n++)
	{
		t=t*(-x*x)/((2*n-1)*2*n);
		s+=t;
	}
	cout<<"cos"<<x<<"="<<s<<endl;
}