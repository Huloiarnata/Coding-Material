#include<stdio.h>
#include<limits.h>
void main(){
    unsigned int num;
    printf("Size of Int: %u\n",sizeof(num));
    num=0;
    printf("Minimum of integer: %u\n",num);
    num=UINT_MAX;
    printf("Maximum of integer: %u\n",num);
    num=8589934592;
    printf("integer num: %u\n",num);
}