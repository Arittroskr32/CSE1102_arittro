#include<stdio.h>
struct employee{
    int eno;
    char ename[20];
    float bs;
};

int main(){
    struct employee e,*emp;
    printf("Enter employee name: ");
    gets(e.ename);
    printf("Enter employee number: ");
    scanf("%d",&e.eno);
    printf("Enter employee salary: ");
    scanf("%f",&e.bs);
    emp =&e;
    printf("\nEmployee details:\n");
    printf("%d\t%s\t%.2f",emp->eno,emp->ename,emp->bs);
    return 0;
}
