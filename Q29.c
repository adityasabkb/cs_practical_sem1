#include<stdio.h>

int is_sub(char arr[],int index,char arr2[]){
    int i = 0;
    int sub = 1;
    while (1){
        if (arr2[i]=='\0' && sub==1){break;}
        if (arr[index]!=arr2[i]){sub =0; break;}
        i++;index++;
    }
    return sub;
}

int substring(char a[],char b[]){
  int index = -1;
  int i=0;
  while (a[i]!='\0'){
    if (a[i]==b[0]){
      if (is_sub(a,i,b)){
        index = i;
        break;
      }
    }
    i++;
  }
  return index;
}
int main(){
  char a[100];
  char b[100];

  printf("enter first string: ");
  gets(a);
  
  printf("string to find: ");
  gets(b);

  
  printf("%d",substring(a,b));

  return 0;
}