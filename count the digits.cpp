#include<iostream>
using namespace std;

int main()
{
	
	int num,count = 0;
	
	cout<<"Enter Any Number:: ";
	cin>>num;
	
	while(num > 0)
	{
		num = num / 10 ;
		count++;
			
	}
	
	cout<<"The NO Of Digits are:: "<<count<<endl;
	return 0;
}
