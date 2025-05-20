#include "Food.h"
#include "Fruit.h"
#include "Meat.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{

	{
		//Food food;

		//food.Consume();

		////food.m_calories = 1232; -- This won't work bcuz m_calories is protected
		//// instead using public setter to modify value
		////food.SetCalories(25);

		//cout << "Food Calories: " << food.GetCalories() << endl;

		//Food* pFood = &food;

		////pFood->Consume();
		//(*pFood).Consume();
	}

	//food.Consume() -- Doesn't recognize instance out of scope bcuz destructor deallocate memory

	cout << "Fruit instance" << endl;
	Fruit apple(25, 10);

	apple.Consume();
	cout << "Fruit Calories: " << apple.GetCalories() << endl;

	cout << "Tuna instance" << endl;
	Meat tuna;
	tuna.Consume();

	vector<Food*> food_list = { &apple, &tuna , new Meat};
}