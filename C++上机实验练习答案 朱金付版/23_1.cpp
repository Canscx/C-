#include<fstream.h>
void main()
{
	float grade[20],total=0,ave=0;
	int i=0,j=0;
	ifstream fin("StudentGrade.txt");
	if(!fin)
	{
		cout<<"不能打开的文件：StudentGrade.txt\n";
		return;
	}
	else
	{
		while(!fin.eof())
		{
			fin>>grade[i];
			total+=grade[i];
			cout<<grade[i++];
			if(i%5==4) cout<<'\n';
			else  cout<<'\t';
		}
		ave=total/(i-1);
		fin.close();
	}
	ofstream fout("Student.txt",ios::app);
	if(!fout)
	{
		cout<<"不能打开的文件：StudentGrade.txt\n";
		return;
	}
	else
	{
		fout<<'\n'<<total
			<<'\t'<<ave;
		fout.close();
	}
}

