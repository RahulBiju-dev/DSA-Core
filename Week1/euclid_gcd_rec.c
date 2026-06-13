//Implementation of Euclid's GCD algorithm using recursion
#include<stdio.h>

int euclid(int a, int b)
{
if(b==0) return a;
return euclid(b, a%b);
}

int main()
{
int a, b;
printf("Enter two numbers: "); scanf("%d %d", &a, &b);
int gcd = euclid(a, b);
printf("Result: %d", euclid(a, b));
return 0;
}
