// Recipes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include "Recipe.h"
using namespace std;

void printRecipe(string ingr[], string instr[]);
Recipe readRecipe();

int main()
{
    cout << "Hello World" << endl;
    string ingr[4];
    string instr[4];
    Recipe rec;
    rec = readRecipe();
    cout << rec.title;
    //printRecipe(ingr, instr);
}

Recipe readRecipe() {
    Recipe r;
    cout << "Title: ";
    cin >> r.title;

    return r;
    //Look for INGREDIENTS:
    //While the next word isn't INSTRUCTIONS:
        //Read in the ingredients to an array of strings
    //Once you see INSTUCTIONS:
        //Read in the instructions to an array of strings
    //Then once do reading stuff in make a recipe object
}

void printRecipe(string ingr[], string instr[]) {
    cout << "Ingredients:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << ingr[i] << endl;
    }
    cout << "\nInstructions:\n";

    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << instr[i] << endl;
    }
    return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
