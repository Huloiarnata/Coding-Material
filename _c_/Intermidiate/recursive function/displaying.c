#include <stdio.h>
void display(int n);
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	display(num);
	return 0;
}
void display(int n)
{
	if(n==0);
	   return;
	display(n-1);
	printf("%d",n);
}
