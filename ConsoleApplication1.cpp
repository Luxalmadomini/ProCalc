// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "CalculatorMath.hpp"
using namespace std;





int main()
{
    bool running = true;
    int size(10);

    //Vector to hold current equation
    vector<string> dynamicStringArray(size);
    pair<string, string> temp;

    //Loop to get user input and organising the input into the vector
    while (running) {
        temp = askForNum();
        dynamicStringArray.push_back(temp.first);
        dynamicStringArray.push_back(temp.second);
        if (temp.second == "=") {
			running = false;
		}
    }

    calculate(dynamicStringArray);
    
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
