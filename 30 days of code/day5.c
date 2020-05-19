//********************************************************************************************** //
//	Author:       Rajas Patil(RJP)
//	Date:         19th May, 2020
//	Description:  Task:
//			Given an integer, n, print its first 10 multiples. Each multiple n*i 
//			(where 1 <= i <= 10) should be printed on a new line in the 
//			form: n x i = result.
//
//		      Input Format:
//			A single integer, n.
//		      Output Format:
//			Print 10 lines of output; each line i (where 1 <= i <= 10) contains 
//			the result of n*i in the form:n x i = result.
//
//	Version:      gcc version 9.3.0
//
//********************************************************************************************** //

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=10; i++)
        printf("%d x %d = %d\n", N,i,N*i);
return 0;
}
