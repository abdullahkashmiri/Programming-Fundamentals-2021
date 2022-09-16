#include<iostream>
using namespace std;
void displayshape(char shape, int size)
{ 
	cout<<"Enter the Size : ";
    cin>>size;
    cout<<"Enter the Shape \n For Square S :\n For Triangle T : ";
    cin>>shape;

	if(shape=='S'|| shape=='s')
	{
		for( int row=1;row<=size;row++)
	{
	    for(int col=1;col<=size ;col++)
	{
		cout<<" "<<col;
	}
		cout<<endl;
	}
	}
else if ( shape=='T'||shape=='t')
	{
     	for( int row=1;row<=size;row++)
	{
	    for(int col=1;col<=row ;col++)
	{
		cout<<" "<<col;
	}
		cout<<endl;
	}
	    
	for(int row=size-1;row>0;row--)
    {
		for(int col=1;col<=row;col++)
	{
			cout<<" " <<col;
	}
		cout<<endl;  
	}
	}
        else 
			cout<<"Invalid Inputs";
	}
int main()
    {
	int size=1;
	char shape=0;
	displayshape(shape,size);
	system("pause");
	return 0;
    }

