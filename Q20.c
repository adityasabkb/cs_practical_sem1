#include <stdio.h>

int main() {
    printf("Enter a string: ");
    char str[100];
    gets(str);
    char vow[5] = { 'a','e','i','o','u' };
    char conso[21] = { 'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z' };
    char dig[10] = { '0','1','2','3','4','5','6','7','8','9' };
    int numVow = 0;
    int numConso = 0;
    int numDig = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 91) {
            str[i] += 32;
        }
        for (int j = 0; j < 5; j++) {
            if (str[i] == vow[j]) {
                numVow++;
            }
        }
        for (int j = 0; j < 21; j++) {
            if (str[i] == conso[j]) {
                numConso++;
            }
        }
        for (int j = 0; j < 10; j++) {
            if (str[i] == dig[j]) {
                numDig++;
            }
        }
    }
    printf("Vowels: %d", numVow);
    printf("\nConsonants: %d", numConso);
    printf("\nDigits: %d", numDig);
    return 0;
}