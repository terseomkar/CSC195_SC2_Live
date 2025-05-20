#pragma once
#include "Food.h"
class Meat : public Food
{
public:
	void Consume() override;
protected:
	bool isCooked;
};

