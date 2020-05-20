//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         20th May, 2020
//	Description:  Task:
//			Given a base-10 integer n, convert it to binary (base-2). Then find 
//			and print the base-10 integer denoting the maximum number of consecutive 
//			1's in n's binary representation.
//
//		      Input Format:
//			A single integer, n.
//		      Output Format:
//			Print a single base-10 integer denoting the maximum number of consecutive 
//			1's in the binary representation of n. 
//
//	Version:      g++ version 9.3.0
//
//********************************************************************************************** //


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,max=0,count=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

   while(n)
    {
        if(n&1)
            count++;
        else
        {
            if(max<count)
            {
                max=count;
            }
            count=0;
        }
        n>>=1;
    }
    if(max<count)
    {
        max=count;
    }
    cout<<max<<endl;

    return 0;
}

