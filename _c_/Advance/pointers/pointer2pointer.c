#include <stdio.h>
int main(void){
    int a, *p, **ptp;
    a=9;
    p=&a;
    ptp=&p;
    printf("Address of a: %p\n",&a);
    printf("Value of p = Address of a: %p\n",p);
    printf("Value of *p = Value of a: %d\n",*p);
    printf("Address of p: %p\n",&p);
    printf("Value of ptp = Address of p: %p\n",ptp);
    printf("Value of *ptp = Value of p: %p\n",*ptp);
    printf("Value of **ptp = Value of a: %d\n",**ptp);
}