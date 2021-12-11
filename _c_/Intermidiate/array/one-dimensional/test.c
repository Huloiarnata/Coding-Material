#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int i,j,sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if((i=0)||(i==r-1)||(j=0)||(j==c-1)){
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}