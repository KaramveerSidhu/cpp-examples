#include<iostream>
using namespace std;

int main()
{
	int n, i, j;
	bool counter;
	cout<<"Enter n";
	cin>>n;

	cout<<"Method 1"<<endl;

	for (i = 1; i <=n ; i++)
	{	

		if (i%2==0)
		{
			counter=0;
		} else {
			counter=1;
		}

		for (j = 1; j <=i; j++)
		{
			
			cout<<counter<<" ";
			if (counter==0)
			{
				counter=1;
			} else {
				counter=0;
			}
		}
		cout<<endl;
	}

	cout<<"Method 2"<<endl;

	for (i = 1; i <=n ; i++)
	{
		for (j = 1; j <=i; j++)
		{
			if ( (i+j)%2==0 ) 
			{
				cout<<"1 ";
			} else {
				cout<<"0 ";
			}
		}
		cout<<endl;
	}	

	return 0;
}