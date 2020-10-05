#pragma once
#include <string>

using namespace std;

class Ingredient 
{
public:
	float amount;
	string unit;
	string name;

	Ingredient(string s);
	~Ingredient();
	friend ostream& operator<<(ostream& os, const Ingredient i);
private:


};
