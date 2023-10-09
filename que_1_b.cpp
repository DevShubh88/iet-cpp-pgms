// reverse a number
#include<iostream>
using namespace std;
int main()
{
	
	int a,num;
	cout<<"enter the number : ";
	cin>> num;
	
	for(int i=0; i<=num; i++)
	{
	num = num % 10;
	a = num;
	cout<<a;
	if(num==0);
	}
	
	return 0;
	
}
