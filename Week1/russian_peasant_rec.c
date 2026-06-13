//Implementation of the russian peasant multiplication method using recursion
#include<stdio.h>

int multiply(int n, int m)
{
if(n==1) return m;
if(n&1) return m + multiply((n-1)/2, 2*m);
else return multiply(n/2, 2*m);
}

int main()
{
int n, m;
printf("Enter two numbers: "); scanf("%d %d", &n, &m);
int product = multiply(n, m);
printf("Result: %d", product);
return 0;
}
