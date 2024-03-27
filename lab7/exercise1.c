#include<stdio.h>
struct employee{
    int eno;
    char ename[20];
    char eadd[100];
    float bs;
};

int main(){
    struct employee x;
    int hra;
    printf("Enter employee no.: \n");
    scanf("%d",&x.eno);
    getchar();
    printf("Enter employee name: \n");
    gets(x.ename);
    printf("Enter employee address: \n");
    gets(x.eadd);
    printf("Enter employee basic salary: \n");
    scanf("%f",&x.bs);
    if(x.bs>15000) hra=1500;
    else hra=1000;
    printf("Details of employee\n");
    printf("Employee number: %d\n",x.eno);
    printf("Employee name: %s\n",x.ename);
    printf("Employee address: %s\n",x.eadd);
    printf("Employee basic salary: %.2f\n",x.bs);
    printf("Employee salary: %.2f",x.bs+hra);
    return 0;
}
