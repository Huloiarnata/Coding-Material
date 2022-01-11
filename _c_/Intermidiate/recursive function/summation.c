#include <stdio.h>
long long int summation(int n);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%lld", summation(num));
    return 0;
}
long long int summation(int n)
{
    if(n==0)
       return 0;
    return (n+summation(n-1));
}