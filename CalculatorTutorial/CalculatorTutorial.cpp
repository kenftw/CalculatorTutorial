// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//The #include statements allow you to reference code located in other files. Sometimes, you may see a filename surrounded by angle brackets (<>); 
//  other times, it's surrounded by quotes (" "). In general, angle brackets are used when referencing the C++ Standard Library, while quotes are used for other files.
#include <iostream>
#include "Calculator.h"

// Tells compiler to expect stuff from the C++ Standard Library to be used in this file. Without this line, each keyword 
//  from the library would have to be preceded with a std:: to denote its scope. Without this line, cout << "... would have to be std::cout << "...
using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    //The cout keyword is used to print to standard output in C++. The << operator tells the compiler to send whatever is to the right of it to the standard output.
    cout << "Calculator Console Application\n\n";
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b\n";
    cout << "Example input string: '5 + 5'\n";
    
    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception, re-enter operation to perform and please don't divide by 0.\n";
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
            
        }
        cout << "Result is: " << result << "\n";
    }
    return 0;
    // Print Hello World below:
    //std::cout << "Hello World!\n";
    //std::cout << " Nice lines man, you should be proud.\n";
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
