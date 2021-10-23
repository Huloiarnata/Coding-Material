#include<stdio.h>
#include<limits.h> // helps in getting min and max of any datatype
int main(){
    // looking into short integer[signed and unsigned]
    short int s_num;
    short unsigned int s_num1;// also can be written as unisgned short int s_num1;
    printf("Size of signed Short Integer: %dbyte\n",sizeof(short int));
    s_num1=0;  //no symbolic constant for unsigned short int min in limit.h
    printf("Minimum of unsigned short integer: %u\n",s_num1);
    s_num1=USHRT_MAX;
    printf("Maximum of unsigned short integer: %u\n",s_num1);
    s_num=SHRT_MIN;
    printf("Minimum of signed short integer: %d\n",s_num);
    s_num=SHRT_MAX;
    printf("Maximum of short integer: %d\n\n\n",s_num);


    printf("Size of Integer: %dbyte\n\n\n",sizeof(int));

    //looking into long integer[signed and unsigned]: 
    
    long int l_num;
    long unsigned int l_num1;// also can be written as unisgned short int s_num1;
    printf("Size of signed long Integer: %dbyte\n",sizeof(long int));
    l_num1=0;  //no symbolic constant for unsigned short int min in limit.h
    printf("Minimum of unsigned long integer: %lu\n",l_num1);
    l_num1=ULONG_MAX;
    printf("Maximum of unsigned long integer: %lu\n",l_num1);
    l_num=LONG_MIN;
    printf("Minimum of signed long integer: %ld\n",l_num);
    l_num=LONG_MAX;
    printf("Maximum of long integer: %ld\n\n\n",l_num);

    printf("Size of long long Integer: %dbyte\n\n\n",sizeof(long long int));

    // looking into unsigned integer:
    unsigned int num;
    unsigned int var1;
    num =4;// when negative we will get garbage value
    printf("Unsigned int num = %u\n\a",num); //%u placeholder is used for unsigned integer
    var1=0;// no symbolic constant for unsigned int min in limit.h
    printf("Minimum of unsigned integer: %u\n",var1);
    var1=UINT_MAX;
    printf("Maximum of unsigned integer: %u\n",var1);

    // looking into signed integers:
    int var2;
    var2= INT_MIN;
    printf("Minimum of signed integer: %d\n",var2);
    var2=INT_MAX;
    printf("Maximum of signed integer: %d\n",var2);


}