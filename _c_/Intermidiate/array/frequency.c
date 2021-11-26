#include <stdio.h>
void main()
{
    printf("NUMBER OF ELEMENTS: ");
    int num,count;
    scanf("%d\n",&num);
    int arr[num],frq[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        frq[i]= -1;
    }
    for(int i=0;i<num;i++)
    {
        count=1;
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                frq[j]=0;
            }
        }
        if(frq[i]!=0)
        {
            frq[i]=count;
        }

    }
    printf("\nFrequency of all elements of array : \n");
    for(int i=0; i<num; i++)
    {
        if(frq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], frq[i]);
        }
    }
    

}