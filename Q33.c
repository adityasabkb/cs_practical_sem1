#include<stdio.h>

int main(){
    FILE * ptr;
    ptr = fopen("line","r");
    char str[50];
    fgets(str,50,ptr);
    // printf("%s",str);
    FILE * ptr2;
    ptr2 = fopen("result","w");
    int letters[26];
    for (int i =0;i<26;i++){
        letters[i] = 0;
    }
    int digits[10] = {0,0,0,0,0,0,0,0,0,0};

    int i = 0;
    while (str[i]!='\0'){
        
        if('0'<=str[i] && '9'>=str[i]){
            digits[str[i]-'0']++;
        }
        else if('a'<=str[i] && 'z'>=str[i]){
            letters[str[i]-'a']++;
        }
        else if('A'<=str[i] && 'Z'>=str[i]){
            letters[str[i]-'A']++;
        }
        i++;
        }
    for (int i=0;i<10;i++){
        if (digits[i]>0){
            fprintf(ptr2,"%d has occured %d times\n",i,digits[i]);
            // printf("%d has occured %d times\n",i,digits[i]);
        }
    }
    for (int i=0;i<26;i++){
        if (letters[i]>0){
            fprintf(ptr2,"%c has occured %d times\n",i+'a',letters[i]);
            // printf("%c has occured %d times\n",i+'a',letters[i]);
        }
    }
    fclose(ptr);
    fclose(ptr2);
    return 0;
}