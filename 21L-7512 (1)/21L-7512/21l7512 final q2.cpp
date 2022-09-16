#include<iostream>
using namespace std;


const int big=5;
const int small =3;

bool patternmatch(int data[big][big],int pattern[small][small])
{
	int check=0;
	// if no changing is required found inside already one
	for(int i=0;i<big;i++)
	{
		check=0;
		for(int j=0;j<big;j++)
		{
			if(data[i][j]==pattern[i][j])
			{
			for(int k=i;k<i+small;k++)
			{

				for(int l=j;l<j+small;l++)
				{
					if(data[k][l]==pattern[k][l])
						check++;
				}

			}}

	}
	
		if(check==small*small)
		     return true;
	}

	//if not fouund 2 lops are used for row and coloumn 
	for(int a=0;a<big;a++)
	{
	for(int b=0;b<big;b++)
	{
	for(int i=a;i<big;i++)
	{
		check=0;
		if(a==big-1)
			i=big-i;
		for(int j=b;j<big;j++)
		{
			if(b==big-1)
			j=big-j;
			if(data[i][j]==pattern[i][j])
			{


			for(int k=i;k<i+small;k++)
			{

				for(int l=j;l<j+small;l++)
				{
					if(data[k][l]==pattern[k][l])
						check++;
				}

			

	}
			}}
		if(check==small*small)
		   { return true;
			}
	else
		return false;
		}
	}
	}
	
	
	
	
}


int main()
{
	
	int data[big][big]={{3,2,7,3,3},{3,2,3,4,5},{1,1,3,4,5},{1,2,9,1,1},{2,3,7,2,2}};
	int pattern[small][small]={{1,1,1},{2,2,2},{3,3,3}};

	for(int i=0;i<big;i++)
	{
		for(int j=0;j<big;j++)
		{
			cout<<data[i][j]<<"  ";
		}
		cout<<endl;
	}
	bool flag= false;
		flag=patternmatch(data,pattern);

	if(flag==true)
	{
		cout<<"pattern exists";
	}
	else
		cout<<"Pattern doesnt exist";

	


	system("pause");
	


	return 0;


}


