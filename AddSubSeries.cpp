#include<iostream>
using namespace std;

int main()
{
	int num,i,sum =0;
	
	cout<<"Enter Length of Series:: ";
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		if(i%2 == 0)
			sum-=i;
		else
			sum+=i;
	}
	cout<<"Result= "<<sum<<endl;
	return 0;
	
}
