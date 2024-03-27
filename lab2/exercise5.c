#include<stdio.h>
int main(){
    int a;
    printf("Enter a digit: \n");
    scanf("%d",&a);

    switch(a){
        case 0:
            printf("Spelling: Zero\n");
            break;
        case 1:
            printf("Spelling: One\n");
            break;
        case 2:
            printf("Spelling: Two\n");
            break;
        case 3:
            printf("Spelling: Three\n");
            break;
        case 4:
            printf("Spelling: Four\n");
            break;
        case 5:
            printf("Spelling: Five\n");
            break;
        case 6:
            printf("Spelling: Six\n");
            break;
        case 7:
            printf("Spelling: Seven\n");
            break;
        case 8:
            printf("Spelling: Eight\n");
            break;
        case 9:
            printf("Spelling: Nine\n");
            break;
        default:
            printf("Not a valid digit\n");
    }

    return 0;
}
/*

    if(a==0){
        printf("Spelling: Zero\n");
    }
    else if(a==1){
        printf("Spelling: One\n");
    }
    else if(a==2){
        printf("Spelling: Two\n");
    }
    else if(a==3){
        printf("Spelling: Three\n");
    }
    else if(a==4){
        printf("Spelling: Four\n");
    }
    else if(a==5){
        printf("Spelling: Five\n");
    }
    else if(a==6){
        printf("Spelling: Six\n");
    }
    else if(a==7){
        printf("Spelling: Seven\n");
    }
    else if(a==8){
        printf("Spelling: Eight\n");
    }
    else if(a==9){
        printf("Spelling: Nine\n");
    }
    else{
        printf("Not a valid digit\n");
    }

*/