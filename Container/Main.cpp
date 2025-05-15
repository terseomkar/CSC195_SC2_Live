#include <iostream>
#include <array>
#include <list>
using namespace std;

int main()
{
	//using built-in array
	cout << "Built-in array" << endl;

	int numbers[5] = { 1,2,3,4,5 };

	cout << "Third element: " << numbers[2] << endl;

	//Undefined behavior - returns random value form accessed memory
	cout << "Out of bound element: " << numbers[7] << endl;	

	numbers[1] = 25;

	//iterating thru array
	cout << "All elements: ";
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	int size = sizeof(numbers) / sizeof(int);
	//numbers.size() -- limited functionality of built-in array

	cout << "Address of first element: " << numbers << endl;

	//fixed length at compile time
	//no built-in methods for common operations
	//fast access to elements, easy to set up

	//STL array
	cout << endl << "STL Array" << endl;

	array<string, 4> animals = { "mouse", "tiger", "snake", "penguin" };

	cout << "Third element: " << animals[2] << endl;

	cout << "Size of array: " << animals.size() << endl;

	//iterating thru array with for each
	cout << "All elements: ";
	for (string ani : animals)
	{
		cout << ani << " ";
	}
	cout << endl;

	//cout << "Out of bound element: " << animals[7] << endl; -- throws exception
	
	//cout << "Last element: " << animals.end() << endl;

	//fixed size with STL algorithm compatibility
	//out of bound exceptions

	//STL List
	cout << endl << "STL List" << endl;

	list<float> height = { 5.6f, 6.3f, 4.2f };

	cout << "Size of list: " << height.size() << endl;

	height.push_front(2.3f);
	height.push_back(7.3f);

	height.sort();

	//iterating thru list
	cout << "All elements: ";
	for (float hei : height)
	{
		cout << hei << " ";
	}
	cout << endl;

	//resizeable container
	// helpful for frequent & efficient insertion & deletion
	//higher memory overhead (pointer for each element)
	//works well iterators and other STL compatibility

}  