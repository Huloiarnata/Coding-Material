#include <stdio.h>
int main(){
    int size ;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++){// inputting value in arrays per indeces
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<size;j++){ // printing value per indeces
        printf("%d\n",ar[j]);
    }
    return 0;
}