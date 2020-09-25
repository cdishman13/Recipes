#pragma once
#include <string>

using namespace std;

class Recipe
{
public:
	string* ingredients;
	string* instructions;
	string title;

	Recipe(int ingrS, int instS);
	~Recipe();

private:

};

