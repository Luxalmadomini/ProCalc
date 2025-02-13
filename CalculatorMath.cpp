
#include "CalculatorMath.hpp"
#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

//Function to ask for a number and an action
static pair<string, string> askForNum() {
    cout << "Type a number\n";
    bool running(true);
    string numberInput;
    string actionInput;
    string temp("");
    while (running) {
        try {
            cin >> numberInput;

            //check if input is a number
            temp = stod(numberInput);

            //if it is the loop ends
            running = false;
        }
        catch (...) {
            cout << "That is not a number, try again:\n";
        }
    }
    running = true;
    cout << "Type an action\n";
    while (running) {
        cin >> actionInput;
        if (actionInput == "+" || actionInput == "-" || actionInput == "*" || actionInput == "/" || actionInput == "(" || actionInput == ")" || actionInput == "^" || actionInput == "=") {
            running = false;
        }
        else {
            cout << "That is not a valid action, try again:\n";
        }
    }
    pair<string, string> returnPair{ numberInput, actionInput };

    return returnPair;
}


static int operationToInt(string operation) {
	if (operation == "+") {
		return 1;
	}
	else if (operation == "-") {
		return 2;
	}
	else if (operation == "*") {
		return 3;
	}
	else if (operation == "/") {
		return 4;
	}
	else if (operation == "^") {
		return 5;
	}
	else if (operation == "sqrt") {
		return 6;
	}
	else {
		return 0;
	}
}


static double arithmetic(double a, string b, double c) {
	switch (operationToInt(b)) {
	case 1:
		return a + c;
	case 2:
		return a - c;
	case 3:
		return a * c;
	case 4:
		return a / c;
	case 5:
		return pow(a, c);
	case 6:
		return sqrt(a);
	default:
		return 0;
	}  
}




//1+6+(4/2+(45-2-(2+5))+6-(6+7)-6)+6+(4-3)=????
static vector<string> parentheses(vector<string> dynamicStringArray) {
    vector<string> result;
	vector<string> tempVec;
	vector<vector<string>> structureVector;                                                    //vector to save the structure of the formula
    int parAmount{0};                                                                           //variuable to count how many start parentheses there are
	int counter(0);                                                                            //iterator to count how many parentheses we have gone through
	int tempPos(0);																			   //variable to save the position of the last start parentheses   

    //reiterate over the array until it is solved
    while (count(dynamicStringArray.begin(), dynamicStringArray.end(), "(") > 0) {
		parAmount = count(dynamicStringArray.begin(), dynamicStringArray.end(), "(");		   //count how many start parentheses there are
        /*string key = "(";
		auto it = find(dynamicStringArray.rbegin(), dynamicStringArray.rend(), key);              //find the last start parentheses
		int res(-1);
        if (it != dynamicStringArray.rend()) {
			res = dynamicStringArray.rend() - it -1;                                              //alternative solution of looking from the rear
        }*/
        counter = 0;
		tempPos = 0;
		for (int i = 0; i < dynamicStringArray.size(); i++) {
            if (dynamicStringArray[i] == "(") {                                                //Look for start parentheses until we reach the final one
				counter++;
                if (counter == parAmount) {
				    tempPos = i;
                }
            }
			if (dynamicStringArray[i] == ")") {												   //Look for end parentheses
                dynamicStringArray.erase(dynamicStringArray.begin() + i);
                break;
            }
            if ((counter == parAmount) && (tempPos < i)) {
    			tempVec.push_back(dynamicStringArray[i]);
                dynamicStringArray.erase(dynamicStringArray.begin() + i);
                i--;
			}
		}




    }
   

    vector<string> result;
}







static void calculate(vector<string> dynamicStringArray) {
    double result(0);



    //Vector to hold the numbers
    vector<double> numbers;
    //Vector to hold the actions
    vector<string> actions;
    //Vector to hold the order of the actions
    vector<string> action;

    cout << "= " << result;

    return;
}