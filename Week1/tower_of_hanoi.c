//Implementation of the tower of hanoi solution using recursion
#include<stdio.h>

void toh(int n, int src, int aux, int dest)
{
if(n==1)
{
printf("Move disk 1 from rod %d to rod %d\n", src, dest);
return;
}
toh(n-1, src, dest, aux);
printf("Move disk %d from rod %d to rod %d\n", n, src, dest);
toh(n-1, aux, src, dest);
}

int main()
{
int n;
printf("Enter the number of discs: "); scanf("%d", &n);
printf("The sequence of moves involved is: \n");
toh(n, 1, 2, 3);
return 0;
}
