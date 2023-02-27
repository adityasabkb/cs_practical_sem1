#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    long long int emp_mobile;
    int emp_age;
    char emp_degree[30];
    float emp_exp;
    addr emp_addr;
} emp;
void prtEmpInfo(emp * ptr){
    printf("name: %s\n",ptr->emp_name);
    printf("mobile: %llu\n",ptr->emp_mobile);
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
long long int phoneInput(){
    long long int x;
    scanf("%llu",&x);
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

void insertEmp(emp * ptr){
    char name[20];
    printf("enter name: ");
    gets(name);
    strcpy(ptr->emp_name,name);
    printf("enter mobile no. : ");
    ptr->emp_mobile = phoneInput();
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
    while (1){
        int a;
        
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
                long long int ph;
                int flag=0;
                printf("enter the mobile no. of employee: " );
                scanf("%llu",&ph);
                for(int i = 0;i<n;i++){
                    if(my_emp[0].emp_mobile==ph){
                        flag=1;
                        prtEmpInfo(&my_emp[i]);
                    }
                    if(flag==0){printf("no record found");}
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