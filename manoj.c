#include <stdio.h>

int main() {
    int a[10][10],b[10][10],mul[10][10];
    int r,c,i,j,k;
    printf("enter the n of rows");
    scanf("%d",&r);
    printf("enter the n of colume");
    scanf("%d",&c);
    printf("enter the num of 1st mat");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
printf("enter the num of 2nd mat");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //mul process
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the values are:");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d\n",mul[i][j]);
    }
}
    return 0;
}