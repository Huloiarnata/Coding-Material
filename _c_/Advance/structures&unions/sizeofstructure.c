#include <stdio.h>
int main(void)
{
    struct employe
    {
        char name[10];
        int age;
        int em_id;
    };
    struct employe emp_1;
    printf("Size of int is : %u\n",sizeof(int));
    printf("Size of char is : %u\n",sizeof(char));
    printf("Size of structure is : %u\n",sizeof(struct employe));
    /* from caluculation the memory reserved should be(10+4+4)=18
    depending on the machine the machine may use different method for alignment requirements.
    The outputed value is different from calculated one on my machine there could be
    unused byte after the last member and unused byte may be of different size. so comparing of structures
    isn't allowed in C*/
}