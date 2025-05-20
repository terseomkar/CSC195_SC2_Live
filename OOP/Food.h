#pragma once
#include <iostream>
using namespace std;

class Food
{
public:
	//Constructor w/o parameters
	//allocating memory for data members
	//initializing data members w/ a default value
	//If we don't create one manually, one is created for us
	Food() {
		m_calories = 0;
		m_p = new int(35);
	}
	//Food() : m_calories(0) {}

	//Constructor w/ parameters
	Food(int calories) {
		m_calories = calories;
	}

	//Default Destructor
	//deallocates memory
	~Food(){
		delete m_p;
	}

	virtual void Consume() = 0;	//pure virtual function, does not need a body
	int GetCalories() { return m_calories; }
	void SetCalories(int calories) { m_calories = calories; }

protected:
	int m_calories;
	int* m_p;
};
