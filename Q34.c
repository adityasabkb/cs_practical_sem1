#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,n;
    printf("enter dimension as MxN: ");
    scanf("%dx%d",&m,&n);
    int * ptr = (int*)malloc(m*n*sizeof(int));
    int * ptr2 = (int*)malloc(m*n*sizeof(int));

    printf("enter elements of first matrix\n");
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("enter the %d element of %d row",j,i);
            scanf("%d",ptr+((i-1)*(m)+j-1));
        }
    }
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",*(ptr+((i-1)*(m)+j-1)));
            // scanf("%d",ptr+(i*(m-1)+j));
        }
        printf("\n");
    }
    printf("enter elements of second matrix\n");
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("enter the %d element of %d row",j,i);
            scanf("%d",ptr2+((i-1)*(m)+j-1));
        }
    }
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",*(ptr2+((i-1)*(m)+j-1)));
            // scanf("%d",ptr+(i*(m-1)+j));
        }
        printf("\n");
    }

    printf("********printing sum of the matrices************\n");
    for (int i = 1; i <=n; i++)
    {
        for(int j=1;j<=m;j++){
            printf("%d ",*(ptr+((i-1)*(m)+j-1)) + *(ptr2+((i-1)*(m)+j-1)));
        }   
        printf("\n");
    }
    
    
    return 0;
}