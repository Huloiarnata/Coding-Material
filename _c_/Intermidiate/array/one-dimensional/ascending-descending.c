#include<stdio.h>
#include<limits.h>
int main()
{
    int nod;
    printf("NUMBER OF NUMBERS IS: ");
    scanf("%d\n",&nod);
    int num[nod];
    for(int i=0;i<nod;i++)
    {
        scanf("%d",&num[i]);
    }
    
    int temp;
    for(int i=0;i<nod;i++)
    {
        for(int j=i+1;j<nod;j++)
        {
            if(num[i]<num[j]) // use '>' for ascending order
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("IN DESCENDING ORDER:\n");
    for(int i=0;i<nod;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n\a");

    return main();
}