#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//employee structure


char temp[10];

typedef struct 
{
    int stree_no;
    char city[15];
    char district[20];
    char state[15];
} addr;



typedef struct EmpData
{
    char emp_name[20];
    int emp_mobile;
    int emp_age;
    char emp_degree[30];
    float emp_exp;
    addr emp_addr;
} emp;


void prtEmpInfo(emp * ptr){
    printf("name: %s\n",ptr->emp_name);
    printf("mobile: %d\n",ptr->emp_mobile);
    printf("age: %d\n",ptr->emp_age);
    printf("degree: %s\n",ptr->emp_degree);
    printf("experience: %f\n",ptr->emp_exp);
    printf("*****address****");
    printf("street no.: %d\n",ptr->emp_addr.stree_no);
    printf("city: %s\n",ptr->emp_addr.city);
    printf("district: %s\n",ptr->emp_addr.district);
    printf("state: %s\n",ptr->emp_addr.state);
}


int intInput(){
    int x;
    scanf("%d",&x);
    gets(temp);
    return x;
}


void getAddr(emp * ptr){
    printf("enter address:\n");
    printf("enter street no.: ");
    scanf("%d",&ptr->emp_addr.stree_no);
    char str[20];
    gets(str);
    
    printf("enter city: ");
    gets(str);
    strcpy(ptr->emp_addr.city,str);
    printf("enter district: ");
    gets(str);
    strcpy(ptr->emp_addr.district,str);
    printf("enter state: ");
    gets(str);
    strcpy( ptr->emp_addr.state,str);

}

//data insertion function
void insertEmp(emp * ptr){

    char name[20];
    printf("enter name: ");
    gets(name);
    strcpy(ptr->emp_name,name);
    // char

    printf("enter mobile no. : ");
    ptr->emp_mobile = intInput();

    printf("enter age: ");
    ptr->emp_age = intInput();
    
    char degree[30];
    printf("enter degree: ");
    gets(degree);
    strcpy(ptr->emp_degree,degree);

    printf("enter experience : ");
    scanf(" %f",&(ptr->emp_exp));

    getAddr(ptr);


}



int main(){
    emp my_emp[20];
    int n=0;

    // while (1){
    //     printf("what do you wnat to do : \n");
    //     printf("1) store new record\n2)");
    // }

    while (1){
        int a;
        int rec_n;
        printf("\nwhat do want to do\n");
        printf("1) check record\n2) add new record\n3)exit\n\n");
        scanf("%d",&a);
        gets(temp);
        if(a==3){
            break;
        }
        if (a==1){
            if (n==0){
                printf("no data available\n");
            }
            else{
                printf("enter the number of record: " );
                scanf("%d",&rec_n);

                if (rec_n>n){
                printf("there are only %d records\n",n);
                }
                else{
                    prtEmpInfo(&my_emp[rec_n-1]);
                }
            }
        }
        if (a==2){
            if(n==20){
                printf("cant enter more records\n");
            }
            else{
                insertEmp(&my_emp[n]);
                n+=1;
            }
        }

    
    }
    return 0;
}