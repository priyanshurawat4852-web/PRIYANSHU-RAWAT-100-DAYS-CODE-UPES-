// Q28: Write a program to print the product of even numbers from 1 to n. //

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
void main()
{
    int n;
    printf("enter n:");
    scanf("%d", &n);

    int product=1;

    for(int i=2;i<=n;i=i+2)
    {
        product=product*i;
    }
    printf("product of even numbers form 1 to %d is %d", n, product);
}
