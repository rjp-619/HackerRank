//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         11th May, 2020
//	Description:  Task:
//			Given an integer, n, perform the following conditional actions:
//			If n is odd, print Weird
//			If n is even and in the inclusive range of 20 to 5, print Not Weird
//			If n is even and in the inclusive range of 6 to 20, print Weird
//			If n is even and greater than 20, print Not Weird
//			Complete the stub code provided in your editor to print whether or not n is weird.
//
//		      Input Format:
//			A single line containing a positive integer, n.
//		      Output Format:
//			Print Weird if the number is weird; otherwise, print Not Weird.
//			
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(N%2==1 || (N <= 20 && N>6 && N%2==0)) 
        cout<<"Weird"<<endl;
    else
        cout<<"Not Weird"<<endl;



    return 0;
}

