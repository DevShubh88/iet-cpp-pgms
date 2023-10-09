#include<iostream>
using namespace std;
int main(){
int num, count = 0;
cout<<"enter the number : ";
cin>>num;

for(int i=0; i<=num; i++)
{
	num = num % 10;
	count++;
	if(num == 0){
		//break;
	}
		
}
count--;

cout<<"the number of digits are : "<<count;
return 0;
}
