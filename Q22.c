#include<stdio.h>

int main(){
    
    char a[100];
    gets(a);
    int letters[26];
    for (int i =0;i<26;i++){
        letters[i] = 0;
    }
    int digits[10] = {0,0,0,0,0,0,0,0,0,0};

    int i = 0;
    while (a[i]!='\0'){
        
        if('0'<=a[i] && '9'>=a[i]){
            digits[a[i]-'0']++;
        }
        else if('a'<=a[i] && 'z'>=a[i]){
            letters[a[i]-'a']++;
        }
        else if('A'<=a[i] && 'Z'>=a[i]){
            letters[a[i]-'A']++;
        }
        i++;
        }
    for (int i=0;i<10;i++){
        if (digits[i]>0){
            printf("%d has occured %d times\n",i,digits[i]);
        }
    }
    for (int i=0;i<26;i++){
        if (letters[i]>0){
            printf("%c has occured %d times\n",i+'a',letters[i]);
        }
    }
    return 0;
}