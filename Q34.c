#include<stdio.h>
#include<stdlib.h>

void addMatrix(int *ptr1,int*ptr2,int m,int n,int * result){
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            *(result+((i-1)*(n)+j-1)) = *(ptr1+((i-1)*(n)+j-1)) + *(ptr2+((i-1)*(n)+j-1));
        }
    }
}

int main(){
    int m,n;
    printf("enter dimension as MxN: ");
    scanf("%dx%d",&m,&n);
    int * ptr = (int*)malloc(m*n*sizeof(int));
    int * ptr2 = (int*)malloc(m*n*sizeof(int));

    printf("enter elements of first matrix\n");
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("enter the %d element of %d row",j,i);
            scanf("%d",ptr+((i-1)*(n)+j-1));
        }
    }
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",*(ptr+((i-1)*(n)+j-1)));
        }
        printf("\n");
    }
    printf("enter elements of second matrix\n");
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("enter the %d element of %d row",j,i);
            scanf("%d",ptr2+((i-1)*(n)+j-1));
        }
    }


    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",*(ptr2+((i-1)*(n)+j-1)));
            // scanf("%d",ptr+(i*(m-1)+j));
        }
        printf("\n");
    }
    printf("********printing sum of the matrices************\n");
    int * result = (int*)malloc(sizeof(int)*m*n);
    addMatrix(ptr,ptr2,m,n,result);
    for(int i =1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",*(result+((i-1)*(n)+j-1)));
            // scanf("%d",ptr+(i*(m-1)+j));
        }
        printf("\n");
    }
    return 0;
}