#include <stdio.h>
#include <string.h>
struct student
/*Declaring Structure with structure tag 'student'
  Compiler will not reserve any memory for this structure it will only reserve memory 
  when variable of this structure type is declared */
{
    char name[15];
    int age;
    int mobile;
};
int main(void)
{
    struct student student1,student2;// declaring member of the structure
    strcpy(student1.name,"Ronit");// acessing member of structure variable with dot operator '.'
    student1.mobile=12345;
    student1.age=19;
    strcpy(student2.name,"Ram");
    student2.mobile=54213;
    student2.age=17;
    printf("Student_1 Details:\n\tName: %s\tMobile_number: %d\tAge: %d\n",student1.name,student1.mobile,student1.age);
    printf("Student_2 Details:\n\tName: %s\tMobile_number: %d\tAge: %d\n",student2.name,student2.mobile,student2.age);


}