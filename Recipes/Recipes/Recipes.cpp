// Recipes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Recipe.h"
using namespace std;

void printRecipe(string ingr[], string instr[]);
void readRecipe(FILE* inf);
void consumeWS(FILE* inf);

int main()
{
    FILE* f;
    f = fopen("CajunPasta.txt", "r");
    
    readRecipe(f);
    return 0;
}

void readRecipe(FILE* inf) {
    //Gets the title 
    char t[20], title[8], ingredients[13], size[3], instructions[14];
    consumeWS(inf);
    fgets(title, 8, inf);
    fgets(t, 20, inf);
    //printf(t); PRINTS THE TITLE

    //Look for INGREDIENTS:
    //While the next word isn't INSTRUCTIONS:
        //Read in the ingredients to an array of strings
    consumeWS(inf);
    fgets(ingredients, 13, inf);
    fgets(size, 2, inf);
    int s1 = atoi(size);
    char** ing = (char**)malloc(s1 * sizeof(char*));
    for (int i = 0; i < s1; i++) {
        ing[i] = (char*)malloc(sizeof(char*) * 40);
    }
    consumeWS(inf);
    for (int i = 0; i < s1; i++) {
        fgets(ing[i], 40, inf);
    }

    /*for (int i = 0; i < s; i++) {
        printf(ing[i]);
    }*/

    //Once you see INSTUCTIONS:
        //Read in the instructions to an array of strings
    consumeWS(inf);
    fgets(instructions, 14, inf);
    fgets(size, 2, inf);
    int s2 = atoi(size);
    char** inst = (char**)malloc(s2 * sizeof(char*));
    for (int i = 0; i < s2; i++) {
        inst[i] = (char*)malloc(sizeof(char*) * 200);
    }
    consumeWS(inf);
    for (int i = 0; i < s2; i++) {
        fgets(inst[i], 200, inf);
    }

    /*for (int i = 0; i < s2; i++) {
        printf(inst[i]);
    }*/

    //Then once do reading stuff in make a recipe object
    for (int i = 0; i < s1; i++) {
        free(ing[i]); // delete the 2nd dimension array
    }
    for (int i = 0; i < s2; i++) {
        free(inst[i]); // delete the 2nd dimension array
    }
    free(inst);
    free(ing);
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

void consumeWS(FILE* inf) {
    int c;

    for (;;) {
        c = fgetc(inf);
        if (' ' == c) continue;
        else if ('\t' == c) continue;
        else if ('\n' == c) {
            continue;
        }
        else if ('\r' == c) continue;
        else if (EOF == c) return;
        else break;
    }
    ungetc(c, inf);
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
