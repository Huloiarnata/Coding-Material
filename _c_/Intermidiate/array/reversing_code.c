#include<stdio.h>
int main()
{
    int arr[5]={2,5,3,4,5};
    // method-1
    // (Displaying reverse array from n-1 to 0)
    printf("METHOD-1\n");
    for(int i=4;i>=0;i--){ 
        printf("%d ",arr[i]); 
    }
    // method-2(Rearranging indeces values)
    // using three variable
    int temp;
    for(int j=0,k=4;j<5,k>=0;j++,k--){
        temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
    }
    printf("\n\nMETHOD-2\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    // using 2 variables
    // will be reversing the array {2,5,3,4,5}
    for(int i=0;i<5/2;i++){// [to avoid repetition]
        temp=arr[i];
        arr[i]=arr[4-i];
        arr[4-i]=temp;
    }
    printf("\n\nMETHOD-3\n");
    for(int i=0;i<5;i++){
       printf("%d ",arr[i]);
    }
    // using 1 variable
    for(int i=0;i<5/2;i++){
        arr[i]=arr[i]+arr[4-i];
        arr[4-i]=arr[i]-arr[4-i];
        arr[i]=arr[i]-arr[4-i];
    }

    printf("\n\nMETHOD-4\n");
    for(int i=0;i<5;i++){
       printf("%d ",arr[i]);
    }
}