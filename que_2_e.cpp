#include<iostream>
using namespace std;
class A{
	public:
	int a,b;
		A(int x, int y)  // CONSTRUCTOR OVERLOADING
		{
			a = x;
			b = y;
		}
		void display()
		{
		cout<<"input value is : "<<a<<endl;
		cout<<"input value is : "<<b<<endl;
		}
};

int main()
{
	A obj1(2,4);
	A obj2(5,6);
	obj1.display();
	obj2.display();
	return 0;
}
