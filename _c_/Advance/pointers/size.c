#include<stdio.h>
int main()
{
    long long int a=9,*ptr=&a;
    printf("Sizeof(ptr)=%u, Sizeof(*ptr)=%u",sizeof(ptr),sizeof(*ptr));
    return 0;
}