// Q42: Write a program to check if a number is a perfect number. //

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    
}
