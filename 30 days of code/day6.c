//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         19th May, 2020
//	Description:  Task:
//			Given a string, S, of length N that is indexed from 0 to N-1, print 
//			its even-indexed and odd-indexed characters as 2 space-separated 
//			strings on a single line.
//			Note: 0 is considered to be an even index.
//
//		      Input Format:
//			The first line contains an integer, T (the number of test cases).
//			Each line i of the T subsequent lines contain a String, S.
//		      Output Format:
//			For each String Sj (where 0 <= j <= T-1), print Sj's even-indexed 
//			characters, followed by a space, followed by Sj's odd-indexed characters. 
//
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);


    //printf("%s", s);
    for(int i=T;i>0;i--)
    {   int k=0,l=0; 
        char s[10000]={0},odd[5000]={0},even[5000]={0};
        scanf("%s", s);
        for(int j=0;j<strlen(s);j++)
            if(j%2)
                odd[k++]=s[j];
            else
                even[l++]=s[j];

        printf("%s %s\n", even, odd);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

