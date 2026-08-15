#include<stdio.h>
int main(){
    int a;
    printf("A:");
    scanf("%d",&a);

    if(a>0){
        printf("POSITIVE");
    }
    else if(a<0){
        printf("NEGATIVE");
    }
    else
    {
        printf("ZERO");
    }

}