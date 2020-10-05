#include "Recipe.h"

Recipe::Recipe(int ingrS, int instS)
{
	ingredients = (string*) malloc(ingrS);
	instructions = (string*)malloc(instS);
}

Recipe::~Recipe()
{
	free(ingredients);
	free(instructions);
}

ostream& operator<<(ostream& os, const Recipe r)
{
	
	return os;
}
