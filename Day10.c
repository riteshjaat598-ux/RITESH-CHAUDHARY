#include<stdio.h>

int main(){
    int a;
    printf("A:");
    scanf("%d",&a);
    int b;
    printf("B:");
    scanf("%d",&b);
    int c;
    printf("C:");
    scanf("%d",&c);

    if( a==b && b==c ){
         printf("The given triangle is equilateral");
    } else if (a == b || b == c || c == a) {
        printf("The given triangle is isosceles");
    } else {
        printf("The given triangle is scalene");
    }
    
    return 0;
}

    








