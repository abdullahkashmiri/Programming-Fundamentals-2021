#include<iostream>
using namespace std;


int countarray(char array[101])
{
	int count=0;
	while(array[count]!='\0')
	{
		count++;
	}
	return count;
}

void trimarray(char array[101])
{
	int x=0,count=0;
	count=countarray(array);
	//cout<<count;
	while (array[0]==' ')
	{
		for(int i=0;i<count;i++)
		{
			array[i]=array[i+1];
		}
		count--;
	}

	while(array[count-1]==' ')
	{
		array[count-1]='\0';
		count--;
	}
	cout<<"After trim was called "<<endl;
	for(int i=0;i<count;i++)
	{cout<<array[i];}
}
void removespace(char array[101])
{
	cout<<endl;
	int  count=0;
	count=countarray(array);
	for(int i=1;i<count;i++)
{
	if(array[i]!=' ' && array[i+1]==' ')
	{ 
		while(array[i+2]==' ')
		{
			for(int j=i+1;j<count;j++)
			{array[j+1]=array[j+2];
			if(j==count-1)
				array[count-1]='\0';
			}
			count--;
		
		}
	}
	}
	cout<<"After Remove extra spaces "<<endl;
	for(int i=0;i<count;i++)
		cout<<array[i];
	cout<<endl;

}


void displaycountalphabets(char array[101])
{

	int count=0,freq=0;
	char ch;
	count=countarray(array);
	
	for(int i=0;i<count;i++)
	{
		freq=1;
		if(array[i]!=' ')
		{
		for(int j=0;j<count;j++)
		{
			if(i!=j)
			{
				if(array[i]==array[j])
				{
				freq++;
				array[j]=' ';
			}
		}
		}
		}
		
		if(array[i]!=' ')
		{
	array[i]=array[i]-32;
	
		cout<<array[i]<<" appears "<<freq<<" times "<<endl;
		
		}}

	
	

}
int main()
{
	char array[101];
	int rescount=0;


	cout<<"Please enter a sentence upto 100 characters long : ";
	cin.getline(array,101);

	rescount=countarray(array);
	trimarray(array);

	removespace(array);

	displaycountalphabets(array);


	system("pause");
	return 0;
}