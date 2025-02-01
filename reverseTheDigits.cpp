#include<iostream>
using namespace std;

int main()
{
	
	int num , sum = 0,reverse =0;
	
	cout<<"Enter Any Number:: ";
	cin>>num;
	
	while(num > 0)
	{
		int lastDigit = (num % 10);
		
		num /= 10;
		
		reverse = (reverse* 10) + lastDigit;
	
	}
	
	cout<<"Reverse Digits:: "<<reverse<<endl;
	return 0;
	
}
