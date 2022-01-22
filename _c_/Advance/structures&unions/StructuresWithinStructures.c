#include <stdio.h>
struct student
{
    char name[20];
    int age;
    struct date
    {
        int day;
        int month;
        int year;
    }birthday;
};
int main(void)
{
    struct student stud_1,stud_2;
    
}