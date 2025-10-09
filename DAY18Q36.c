// Q36: Write a program to find the HCF (GCD) of two numbers. //

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
void main()
{
    int a,b,hcf;

    printf("enter a and b:");
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    printf("%d", hcf);
}
