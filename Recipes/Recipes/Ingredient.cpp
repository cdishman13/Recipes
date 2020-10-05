#include "Ingredient.h"

Ingredient::Ingredient(string s)
{

}

Ingredient::~Ingredient()
{
}

ostream& operator<<(ostream& os, const Ingredient i)
{
	os << i.amount << " " << i.unit << " " << i.name;
	return os;
}
