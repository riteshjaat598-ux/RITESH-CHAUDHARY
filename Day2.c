#include<stdio.h>
int main(){
    int a;
    printf("A:");
    scanf("%d",&a);
    printf("THE LENGTH IS:%d\n",a);
    int b;
    printf("B:");
    scanf("%d",&b);
    printf("THE BREADTH IS:%d\n",b);
    printf("THE AREA OF RECTANGLE IS:%d\n",a*b);
    printf("THE PERIMETER OF RECTANGLE IS:%d\n",2*(a+b));
    return 0;

}