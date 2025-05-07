#include <iostream>

int main()
{
	std::cout << "Data Types Project" << std::endl;

	const int i = 0;
	long l = 0;
	bool b;

	//i = 5;

	std::cout << i << std::endl;
	std::cout << &i << std::endl;
	std::cout << sizeof(i) << std::endl;
	std::cout << sizeof(l) << std::endl;
	std::cout << sizeof(b) << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	// Data Type Conversion
	// implicit conversion
	// target data type has the capacity (memory) to store the original value
	short numShrt = 5;
	int numInt= numShrt;

	std::cout << numInt << std::endl;

	//explicit conversion

	double numDbl = 654.345;
	int numIntdbl = (int)numDbl;	//traditional C++ way

	numIntdbl = static_cast<int>(numDbl);	//modern C++ way + compile time conversion

	std::cout << numIntdbl << std::endl;


}