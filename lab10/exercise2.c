#include<stdio.h>
int main(){
    int n,number=0,i=0;
    char a[100],p[100];
    FILE *in;
    in=fopen("input.txt","r");
    do{
        fgets(a, 1024, in);
        fscanf(in, "%d", &n);
        i++;
        a[i]=n;
    }while(in!=EOF);
    for (int i = 0; a[i]!='\0'; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}


