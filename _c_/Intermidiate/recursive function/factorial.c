#include <stdio.h>
long long int factorial(int n);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%lld",factorial(num));
    return 0;
}
long long int factorial(int n)
{
    if(n==0)
       return 1;
    return (n*factorial(n-1));
}