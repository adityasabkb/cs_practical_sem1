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

int main(){
    char a[100];
    printf("enter main string: ");
    gets(a);

    char b[100];
    printf("enter string to replace: ");
    gets(b);
    
    char c[100];
    printf("enter string to replace with: ");
    gets(c);

    char final[100];
    int i_a=0;
    int i_f=0;
    int la=0;
    int lb=0;
    int lc=0;
    while(1){
        if(a[la]=='\0'){
            break;
        }
        la++;
    }
    while(1){
        if(b[lb]=='\0'){
            break;
        }
        lb++;
    }
    while(1){
        if(c[lc]=='\0'){
            break;
        }
        lc++;
    }
    
    while (a[i_a]!='\0'){
        int sub = 0;
        if (a[i_a]==b[0]){
            if(is_sub(a,i_a,b)==1){
                sub = 1;
                i_a+=lb;
                
                for(int i=0;i<lc;i++){
                    final[i_f]=c[i];
                    i_f++;
                }
                
            }
        }

        if (sub==0){
            final[i_f]=a[i_a];
            i_a++;
            i_f++;
        }
        
    }
    
    final[i_f]='\0';
    printf("%s",final);
    return 0;
}

// hello world where are you //a
// world 
// earth
// hello earth where are you //final
