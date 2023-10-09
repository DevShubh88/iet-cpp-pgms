#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		A(int x, int y) // parameterised consructor
		{
			a = x;
			b = y;
		}
	void display()
	{
		cout<<"value of a is : "<<a<<endl;
		cout<<"value of b is : "<<b<<endl;
	}
};

int main()
{
	A obj(2,4); // parameterised consructor is called
	obj.display();

	return 0;
}

