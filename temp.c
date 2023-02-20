#include<stdio.h>

char temp[10];

int main(){
    // char a = getchar();
    char str1[10];
    char str2[10];
    char str3[10];
    char str4[10];
    char str5[10];
    char str6[10];

    int a;
    gets(str1);
    scanf("%d",&a);
    gets(temp);
    gets(str2);
    gets(str3);

    printf("a: %d\n",a);
    printf("str1: %s\n",str1);
    printf("str2: %s\n",str2);
    printf("str3: %s\n",str3);
    

    
    
    return 0;
}