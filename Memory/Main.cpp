#include <iostream>
using namespace std;

void set(int& i)
{
	i = 123;
}

//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}

void swapper(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{

	int i1 = 10;
	int i2 = 20;

	int& r = i1;	// reference once declared NEEDS to be assigned to a varible

	//r = 30;

	//set(i1);

	int* p = nullptr;	// pointer can be declared and point to nothing
	p = &i2;

	swap(i1, i2);

	cout << "i1: " << i1 << endl;
	cout << "i2: " << i2 << endl;
	cout << "address i2: " << &i2 << endl;
	cout << "address r: " << &r << endl;
	cout << "value p: " << p << endl;
	cout << "dereference p: " << *p << endl;
	cout << "address p: " << &p << endl;
}