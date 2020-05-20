//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         20th May, 2020
//	Description:  Write a factorial function that takes a positive integer, N as a parameter 
//		      and prints the result of N!(N factorial).
//		      N is user input
//		      Recursive method to calculate Factorial
//
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {

  return (n > 1) ? n * factorial(n - 1) : 1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
