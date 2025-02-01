#include<iostream>
using namespace std;

int main() {
	int num1,num2;

	cout<<"Enter 1st value:: "<<endl;
	cin>>num1;

	cout<<"Enter 2nd value:: "<<endl;
	cin>>num2;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout<<"1st Num:: "<<num1<<endl<<"2nd Num:: "<<num2<<endl;
	return 0;
}
