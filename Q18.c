#include <stdio.h>

int main() {
    printf("Enter a string: ");
    char str[100];
    gets(str);
    printf("Enter the character you want to search for: ");
    char ch;
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; i < 100; i++) {
        if (str[i] == ch) {
            count++;
        }
        if (str[i] == '\0') {
            break;
        }
    }
    printf("The number of occurences of '%c' in the line of text is %d", ch, count);
    return 0;
}