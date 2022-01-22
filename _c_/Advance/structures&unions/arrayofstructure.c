#include <stdio.h>
int main(void)
{
    struct student
    {
        char name[10];
        int age;
        int marks;
    };
    int i;
    struct student stud[5];// array of 5 elements, each od which is a structure of type struct student
    for(i=0;i<5;i++)
    {
        printf("Enter name , rollno , marks : \n");
        scanf("%s %d %d",stud[i].name,&stud[i].age,&stud[i].marks);
        // each element of stud will have 3 members. structures will accessed through subscript notation
    }
    for(i=0;i<5;i++)
    {
        printf("%s %d %d\n",stud[i].name,stud[i].age,stud[i].marks);
    }
}