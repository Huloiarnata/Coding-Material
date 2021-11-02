#include <stdio.h>
void main(){
    int el;
    scanf("Enter num of array elements: %d\n",&el);
    int arr[el];
    int i;
    for(i=0;i<el;i++){
        scanf("%d",&arr[i]);
        printf("array[%d] is: %d\n",i,arr[i]);
    }
}