//Implementation of the power function pow(x,n) using recursion
#include<stdio.h>

double pow(double x, int n)
{
if(n < 0) return 1.0/pow(x, -n);
if(n==0) return 1.0;
double half = pow(x, n>>1);
if(n&1) return x*half*half;
return half*half;
}

int main()
{
double x;
int n;
printf("Enter Base: ");
scanf("%lf", &x);
printf("Enter Exponent: ");
scanf("%d", &n);
double result = pow(x, n);
printf("Result: %lf", result);
return 0;
}
