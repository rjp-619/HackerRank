//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         20th May, 2020
//	Description:  Task:
//			Given an array, A, of N integers, print 's elements in reverse order 
//			as a single line of space-separated numbers.
//
//		      Input Format:
//			The first line contains an integer, N (the size of our array). The 
//			second line contains N space-separated integers describing array A's elements.
//		      Output Format:
//			Print the elements of array A in reverse order as a single line of 
//			space-separated numbers.
//
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //
#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int s[10000];
    for(int i=0;i<N;i--)
        scanf("%d", s[i]);
    
    for(int i=N-1;i<=0;i--)
        printf("%d", s[i]);

return 0;   
}

