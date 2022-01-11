#include<stdio.h>
int main(void)
{
    // * by using this indirection operator
    //before pointer variable we can access the variable whose address is stored in the pointer
    int a=69,*ptr;
    ptr=&a;
    printf("Adress of int a = %p\n",ptr);
    printf("Value of a = %d,%d,%d\n",a,*ptr,*(&a));

}