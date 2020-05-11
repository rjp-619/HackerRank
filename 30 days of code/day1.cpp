//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         9th May, 2020
//	Description:  Input Format
//			The first line contains an integer that you must sum with i.
//			The second line contains a double that you must sum with d.
//			The third line contains a string that you must concatenate with s.
//		      Output Format
//			Print the sum of both integers on the first line, the sum of both 
//			doubles (scaled to 1 decimal place) on the second line, and then the 
//			two concatenated strings on the third line.
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
//#include<stringstream>
    
    int j;
    double e;
    string t;

    cin>>j>>e;
    cin.ignore();
    getline(cin, t);
    
    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<e+d<<"\n"<<s+t<<endl;
    
    //cout<<t<<endl;
   // cout<<s+t<<endl;


    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
