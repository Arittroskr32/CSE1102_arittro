#include<stdio.h>
int main(){
    int a,b,c,d,x;
    printf("Enter foour numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("if you want to berforme biggest then press 1 if minimum then press 2\n");
    scanf("%d",&x);
    if(x==1){

    if((a>b)&&(a>c)&&(a>d)){
        printf("%d is the biggest number.\n",a);
    }
    else if((b>a)&&(b>c)&&(b>d)){
        printf("%d is the biggest number.\n",b);
    }
    else if((c>a)&&(c>b)&&(c>d)){
        printf("%d is the biggest number.\n",c);
    }
    else{
        printf("%d is the biggest number.\n",d);
    }

    }

    else if(x==2){
        if((a<b)&&(a<c)&&(a<d)){
        printf("%d is the minimum number.\n",a);
    }
    else if((b<a)&&(b<c)&&(b<d)){
        printf("%d is the minimum number.\n",b);
    }
    else if((c<a)&&(c<b)&&(c<d)){
        printf("%d is the minimum number.\n",c);
    }
    else{
        printf("%d is the minimum number.\n",d);
    }

    }
    
    else{
        printf("Not valid result\n");
    }
    return 0;
}