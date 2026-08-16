#include<stdio.h>
int main(){
    int a,b,c;
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);

    if( a>=b && a>=c){
        printf("A IS GREATER.\n");
    }
    else if( b>=a && b>=c){
        printf("B IS GREATER.\n");
    }
    else{
        printf("C IS GREATER.\n");
    }
    return 0;

}
