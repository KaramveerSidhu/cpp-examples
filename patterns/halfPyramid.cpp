#include<iostream>
using namespace std;

int main()
{
	int n,i,j,temp;
	cout<<"Enter n";
	cin>>n;

	cout<<"Method 1"<<endl;

	for (i = 1; i <=n ; i++)
	{
		temp = n-i;
		for (j = 1; j <=n; j++)
		{
			// Print n-i number of spaces then i number of stars
			//Ex- when temp is 4 print '  ' temp 3 print '  ' till 0.
			//When temp is 0 print '* '
			if (temp>0)
			{
				cout<<"  ";
			} 
			else {
				cout<<"* ";
			}

			temp--;
		}
		cout<<endl;
	}

	cout<<"Method 2"<<endl;

	for (i = 1; i <=n ; i++)
	{
		for (j = 1; j <=n; j++)
		{
			if (j<=n-i)
			{
				cout<<"  ";
			} 
			else {
				cout<<"* ";
			}
		}
		cout<<endl;
	}

	return 0;
}