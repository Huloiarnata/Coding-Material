#include <stdio.h>
#include <math.h>
long int converter(int n);
int main()
{
   int num;
   printf("Enter Decimal Number: ");
   scanf("%d",&num);
   printf("The Binary of %d is %ld",num,converter(num));
   return 0;
}
//can only covert till 1023
long int converter(int n)
{
   int bin=0,rem,a=1;
   do{   
      rem=n%2;
      bin=bin+(rem*a);
      n/=2;
      a*=10;}while(n>0);
   return bin;
}