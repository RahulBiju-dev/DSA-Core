//Program to count the number of binary digits of a number
#include<stdio.h>

int bin_rec(int n)
{
if(n==1 || n == 0) return 1;
return bin_rec(n/2) + 1;
}

int main()
{
int n;
printf("Enter a number: "); scanf("%d", &n);
int n_digits = bin_rec(n);
printf("Number of binary digits = %d", n_digits);
return 0;
}
