#include<stdio.h>
#include<stdbool.h>

void substring(char s1[], char s2[],int n,int m){
    int j = 0,c;
    static bool once = false;
  
  for(int i=0;i<=n;){


    if(s1[i]==s2[j]){

      //value to c is appointed only once
      if (once==false)
      {
        once = true;
        c = j+1;
      }
      //incrementing values for next substrings to be compared in the next iteration of the loop
      i++;
      j++;
      
     
    }
    else{
      //the subtrings of j is incremented for which the 1st substring of s1 matches some jth subtring of s2
      j++;
      c = -1;
      if (j==m)
      {
        //breaks out of loop if j exceeds the size of s2
        break;
      }
      
    }

  }
  //prints the value of position for which the string dont match or match
  printf("%d",c);
    
}

void main() {
int n,m;
char s1[10],s2[10];
printf("Enter the first string(smaller string) and its size:\t");
scanf("%s ",s1);
scanf("%d", &n);

printf("Enter the second string and its size:\t");
scanf("%s",s2 );
scanf("%d", &m);


substring(s1,s2,n,m);

}