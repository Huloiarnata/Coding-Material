#include <stdio.h>
#include <math.h>
int isprime(int n);
int printprime(int num1,int num2);
int main()
{
   int num1,num2;
   printf("ENTER 1st NUMBER : ");
   scanf("%d",&num1);
   printf("ENTER 2nd NUMBER : ");
   scanf("%d",&num2);
   printprime(num1,num2);
   return 0;
}
int printprime(int num1, int num2)
{
   for(int i=num1;i<num2;i++)
      if(isprime(i))
         printf("THIS IS A PRIME NUMBER : %d\n",i);
}
int isprime(int n)
{
   int i;
   for(i=2;i<=sqrt(n);i++)
      if(n%i==0)
         return 0;
   return 1;
}