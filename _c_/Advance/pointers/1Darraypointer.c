#include <stdio.h>
int main(void)
{
    int ar[5]={5,10,15,20,25};
    int i;
    for(i=0;i<5;i++)
    {
        printf("Value of array[%d] = %d\t",i,ar[i]);
        printf("Address of array[%d] = %p\n",i,&ar[i]);
    }
}