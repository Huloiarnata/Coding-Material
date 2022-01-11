#include <stdio.h>
int main(void){
    int a=9,*p=&a;
    printf("Address of a = Address of p = %p\n",p);
    p++;
    printf("New value of p = %p",p);

}