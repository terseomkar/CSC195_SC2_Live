#include "Meat.h"

void Meat::Consume()
{
	if (isCooked)
		cout << "Yummy yummy!" << endl;
	else
		cout << "Ugh!" << endl;
}
