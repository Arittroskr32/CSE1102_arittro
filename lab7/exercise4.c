#include<stdio.h>
int main(){
struct student{
    int rno;
    char name[20];
    int marks;
    struct dob{
        int d;
        char mon[20];
        int y;
    } db;
} s[2];

    int i;
    for ( i = 0; i <2; i++)
    {
        printf("Enter student[%d] Roll number:",i+1);
        scanf("%d",&s[i].rno);
        fflush(stdin);
        printf("Enter student[%d] name: ",i+1);
        gets(s[i].name);
        printf("Enter student[%d] marks: ",i+1);
        scanf("%d",&s[i].marks);
        printf("Enter student[%d] Date of Birth: ",i+1);
        scanf("%d %s %d",&s[i].db.d,&s[i].db.mon,&s[i].db.y);
    }
    printf("\nStudents details:\n");
    for ( i = 0; i < 2; i++)
    {
        printf("\n%d\t%s\t%d\t%d-%s-%d",s[i].rno,s[i].name,s[i].marks,s[i].db.d,s[i].db.mon,s[i].db.y);
    }
    return 0;
    }
    