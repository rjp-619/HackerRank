//      Author:       Rajas Patil(RJP)
//      Date:         21th May, 2020
//      Description:  Task:
//      		Calculate the hourglass sum for every hourglass in A, then print 
//      		the maximum hourglass sum.
//
//      	      Input Format:
//			There are 6 lines of input, where each line contains 6 space-separated 
//			integers describing 2D Array A; every value in A will be in the 
//			inclusive range of -9 to 9.
//		      Output Format:
//			Print the largest (maximum) hourglass sum found in A.
//
//      Version:      gcc version 9.3.0
//
//********************************************************************************************** //


#include<stdio.h>

int main()
{   int sum;
    int max=-100;
    int arr[6][6];
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            scanf("%d", &arr[i][j]);

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1];

        if(max<sum)
            max=sum;

        }

        /*if(max<sum)
            max=sum;*/
        printf("%d", max);

return 0;
}

