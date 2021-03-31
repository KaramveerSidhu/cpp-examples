#include<iostream>
using namespace std;

int main()
{
	int n, i, j, p;
	cout<<"Enter n";
	cin>>n;

	p = n*2;

	for (i = 1; i <=p ; i++)
	{
		for (j = 1; j <=p; j++)
		{
			if (i<=n)
			{
				if (j<=i || j>p-i)
				{
					cout<<"* ";
				} else {
					cout<<"  ";
				}
			} else {
				if (j<=p-i+1 || j>=i)
				{
					cout<<"* ";
				} else {
					cout<<"  ";
				}
			}
		}
		cout<<endl;
	}

	return 0;
}