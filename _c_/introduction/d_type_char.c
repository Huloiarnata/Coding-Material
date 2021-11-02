#include<stdio.h>
void main(){
    printf("Size of char is: %d byte\n",sizeof(char));
    printf("Size of char is: %d byte\n",sizeof(float));
    char alpha;
    alpha=129;
    printf("Charecter is: %c\n",alpha);
    printf("Charecter is: %x",alpha); // for hexadecimal use placeholder %x
}