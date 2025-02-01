#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	
	cout<<"Enter no of Lines:: "<<endl;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1 ; j<=n-i ; j++)
		{
			cout <<" ";
		}
		
		for(j=1 ; j<=(2*i)-1; j++)
		{
			int m = (2*i)-1;
			
			if(i==1 || j==1 || i==m || j==m || i==n)
			{
				cout<<i;
			}
			
			else
			{
				cout<<" ";
			}
		}
	 
		cout<<endl;
	}
		return 0;
}
