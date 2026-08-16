#include<stdio.h>
int main(){
    int a;
    printf("ENTER THE YEAR:");
    scanf("%d",&a);
    
    if((a%4==0 && a%100!=0)||(a%400==0)){
        printf("YEAR ENTERED IS A LEAP YEAR.",a);
    }
    else{
        printf("YEAR ENTERED IS NOT A LEAP YEAR.",a);
    }
}