#include<stdio.h>
int f(int);
int main()
{
int n, m= 0, i;
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series terms are:");
for(i = 1; i <= n; i++)
{
printf("%d", f(m));
m++;
}
return 0;
}
int f(int n)
{
if(n == 0 || n == 1)
return n;
else
return(f(n-1) + f(n-2));
}
