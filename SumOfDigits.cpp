#include<iostream>
using namespace std;

int main()
{
	
	int num , sum = 0;
	
	cout<<"Enter Any Number:: ";
	cin>>num;
	
	while(num > 0)
	{
		sum = sum + (num%10);
		num = num / 10 ;
			
	}
	
	cout<<"The Sum Of Digits are:: "<<sum<<endl;
	return 0;
}
