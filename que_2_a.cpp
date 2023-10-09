#include<iostream>
using namespace std;
class A {
	public:
		A()
		{
			cout<<"constructor 1 is called"<<endl;
		}
		~A()
		{
			cout<<"destructor 1 is called"<<endl;
		}
};
class B:public A {
	public:
		B()
		{
			cout<<"constructor 2 is called"<<endl;
		}
		~B()
		{
			cout<<"destructor 2 is called"<<endl;
		}
};
int main()
{
	A obj;
	B obj1;
	return 0;
}
