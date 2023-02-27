#include <stdio.h>

int main() {
    printf("Enter a string: ");
    char str[100];
    gets(str);
    char vowel[5] = { 'a','e','i','o','u' };
    int nVow = 0;
    int nConso = 0;
    int nDig = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='a' && str[i]<= 'z')){

            str[i] = (str[i]<'a')?str[i]+'a'-'A':str[i];
        
            int isVow=0;
            for (int j = 0; j < 5; j++) {
                if (str[i] == vowel[j]) {
                    nVow++;
                    isVow=1;
                    break;
                }
            }
            if (isVow==0 && str[i]!=' ' && str[i]!='\t'){
                nConso++;
            }
        }
        else{
            for (int j = '0'; j <= '9'; j++) {
            if (str[i] == j) {
                nDig++;
            }
            }
        }
        
    }
    printf("Vowels: %d", nVow);
    printf("\nConsonants: %d", nConso);
    printf("\nDigits: %d", nDig);
    return 0;
}