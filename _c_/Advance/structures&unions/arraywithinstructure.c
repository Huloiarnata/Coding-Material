#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    int submarks[2];
};
int main(void)
{
    struct student stud[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Enter detail of student_%d :\n",(i+1));
        printf("Student_%d Name:\t",(i+1));
        scanf("%s",stud[i].name);
        printf("Student_%d Roll_No:\t",(i+1));
        scanf("%d",&stud[i].rollno);
        for(j=0;j<2;j++)
        {
            printf("Enter subject_%d marks :\n",j+1);
            scanf("%d",&stud[i].submarks[j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("Student Details:\n");
        printf("Student_%d\nName:%s\nRoll_No:%d\n",(i+1),stud[i].name,stud[i].rollno);
        for(j=0;j<2;j++)
        {
            printf("Subject_%d Marks: %d\n",(j+1),stud[i].submarks[j]);
        }
        printf("\n");
    }
}