#include<stdio.h>
struct smarks{
    char sname[20];
    int marks;
};

int main(){
    struct smarks marks[10];
    int i,pos;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter student[%d] name:\n",i);
        getchar();
        gets(marks[i].sname);
        printf("Enter student[%d] marks:\n",i);
        scanf("%d",&marks[i].marks);
    }
    pos=0;
    for ( i = 0; i < 10; i++)
    {
        if(marks[i].marks>marks[pos].marks) pos=i;
    }
    printf("Student %s has got highest marks %d\n",marks[pos].sname,marks[pos].marks);
    return 0;
}