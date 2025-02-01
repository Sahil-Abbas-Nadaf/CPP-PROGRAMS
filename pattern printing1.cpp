#include<iostream>
using namespace std;

int main()
{
	int n,m,i,j;
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	cout<<"Enter the no of column: "<<endl;
	cin>>m;
	
	for(i=1;j<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cout<<"*";
		}
			cout<<endl;
	}
	
	return 0;
}
