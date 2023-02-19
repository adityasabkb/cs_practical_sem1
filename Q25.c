#include<stdio.h>
#include<string.h>
#include<math.h>

char* getStr(char* str,char c,int isTen){
    
    switch (c)
    {
    case '0':
        strcpy(str,"\0");
        break;
    case '1':
        strcpy(str,"one");
        break;
    case '2':
        (isTen)?(strcpy(str,"twenty")):(strcpy(str,"two"));
        break;
    case '3':
        (isTen)?(strcpy(str,"thirty")):(strcpy(str,"three"));
        break;
    case '4':
        (isTen)?(strcpy(str,"fourty")):(strcpy(str,"four"));
        break;
    case '5':
        (isTen)?(strcpy(str,"fifty")):(strcpy(str,"five"));
        break;
    case '6':
        (isTen)?(strcpy(str,"sixty")):(strcpy(str,"six"));
        break;
    case '7':
        (isTen)?(strcpy(str,"seventy")):(strcpy(str,"seven"));
        break;
    case '8':
        (isTen)?(strcpy(str,"eighty")):(strcpy(str,"eight"));
        break;
    case '9':
        (isTen)?(strcpy(str,"ninety")):(strcpy(str,"nine"));
        break;
    default:
        break;
    
    }
    
    return str;
}
char * getStrTen(char* str,char a){
    switch (a)
    {
    case '0':
        strcpy(str,"ten");
        break;
    case '1':
        strcpy(str,"eleven");
        break;
    case '2':
        strcpy(str,"twelve");
        break;
    case '3':
        strcpy(str,"thirteen");
        break;
    case '4':
        strcpy(str,"fourteen");
        break;
    case '5':
        strcpy(str,"fifteen");
        break;
    case '6':
        strcpy(str,"sixteen");
        break;
    case '7':
        strcpy(str,"seventeen");
        break;
    case '8':
        strcpy(str,"eighteen");
        break;
    case '9':
        strcpy(str,"nineteen");
        break;
    
    default:
        break;
    }
    return str;
}

int main(){

    float amount;
    scanf("%f",&amount);
    // printf("%f",amount);

    amount = roundf(amount*100);
    
    // amount = amount/100;
    

    char h,t,o,th,hh;

    hh = '0'+ (int)(amount)%10;
    th = '0' + (int)(amount/10)%10;
    o = '0' + (int)(amount/100)%10;
    t = '0' + (int)(amount/1000)%10;
    h = '0' + (int)(amount/10000)%10;
    char str[10];
    // scanf("%c%c%c.%c%c",&h,&t,&o,&th,&hh);
    getStr(str,h,0);
    if (str[0]!='\0'){
        printf("%s hundred ",str);
    }
    if (t!='1'){
        //getStr(str,h,0),getStr(str,t,1)
        getStr(str,t,1);
        if (str[0]!='\0'){
            printf("%s ",str);
        }
        getStr(str,o,0);
        printf("%s ",str);
        
    }
    else{
        printf("%s ",getStrTen(str,o));
    }
    if (t=='0'&&h=='0'&&o=='0'){
        printf("zero ");
    }
    printf("rupees ");


    if (th!='1'){
        //getStr(str,h,0),getStr(str,t,1)
        getStr(str,th,1);
        if (str[0]!='\0'){
            printf("%s ",str);
        }
        getStr(str,hh,0);

        printf("%s ",str);
        
    }
    else{
        printf("%s ",getStrTen(str,hh));
    }
    if ( hh=='0' && th=='0'){
        printf("zero ");
    }
    printf("paise");
    return 0;
}