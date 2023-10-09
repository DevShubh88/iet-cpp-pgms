// find no of digits
#include<iostream>
using namespace std;
int main(){
int num;
int count = 0; // using count variable to keep no of counts
cout<<"enter the number : ";
cin>>num;
// using for loop for no of counts
for(int i=0; i<=num; i++)
{
	num = num % 10;
	count++;
	if(num == 0);
}
count--;
cout<<"the number of digits are : "<<count;
return 0;
}
