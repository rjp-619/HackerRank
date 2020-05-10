//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         8th May, 2020
//	Description:  Input Format
//			A single line of text denoting  (the variable whose contents must be printed).
//		      Output Format
//			Print Hello, World. on the first line, and the contents of  on the second line.
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    cout << input_string << endl;
    // TODO: Write a line of code here that prints the contents of input_string to stdout.

    return 0;
}

