#include<stdio.h>
#include<stdlib.h>
int main() {
   const char *str = "12345";
   char c = 's';
   int x, y, z;

   sscanf(str, "%d", &x); // Using sscanf
   printf("\nThe value of x : %d", x);

   y = atoi(str); // Using atoi()
   printf("\nThe value of y : %d", y);

   z = (int)(c); // Using typecasting
   printf("\nThe value of z : %d", z);

   return 0;
}