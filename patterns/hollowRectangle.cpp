#include <iostream>
using namespace std;

int main()
{

	int i, j, rows, columns;
	cout<<"Enter number of rows "<<endl;
	cin>>rows;
	cout<<"Enter number of columns "<<endl;
	cin>>columns;

	cout<<"Method 1"<<endl;

	for (i = 1; i <= rows; ++i)
	{
		if (i==1 || i==rows)
		{
			for (j = 1; j <= columns; ++j)
			{
				cout<<"* ";
			}
		} else {

			for (j = 1; j <= columns; ++j)
			{	
				if (j==1 || j==columns)
				{
					cout<<"* ";
				} else {

					cout<<"  ";
				}
				
			}
		}
		
		cout<<"\n";
	}

	cout<<"Method 2"<<endl;

	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= columns; ++j)
		{
			if (i==1 || i==rows || j==1 || j==columns)
			{
				cout<<"* ";
			} else {
				cout<<"  "; 
			}
		}
		cout<<"\n";
	}

	return 0;
}