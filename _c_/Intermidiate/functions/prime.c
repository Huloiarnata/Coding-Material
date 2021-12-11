#include <stdio.h>
#include <math.h>
int isprime(int n);
int main()
{
   int num;
   printf("ENTER NUMBER : ");
   scanf("%d",&num);
   if(isprime(num))
      printf("%d is PRIME\n",num);
   else
      printf("%d is NOT PRIME\n",num);
   return 0;
}
int isprime(int n)
{
   int i;
   for(i=2;i<=sqrt(n);i++)
      if(n%i==0)
         return 0;
   return 1;
}