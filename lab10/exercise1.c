#include<stdio.h>
int main(){
    char a[100];
    int i=0;
    FILE *in;
    in=fopen("input.txt","r");
    char c=fgetc(in);
    while(c!=EOF){
        a[i]=c;
        i++;
        c=fgetc(in);
    }
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;
        else a[i]=a[i]-32;
    }
    puts(a);
    fclose(in);
    return 0;
}