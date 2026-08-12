#include<stdio.h>
int main (){
    int a , b , c;

    printf("A:");
    scanf("%d",&a);
    
    printf("B:");
    scanf("%d",&b);
    
    printf("\n BEFORE SWAPPING:\n");
    printf("THE FIRST NUMBER IS:%d\n",a);
    printf("THE SECOND NUMBER IS:%d\n",b);

    c = a ;
    a = b ;
    b = c ;

    printf("\n AFTER SWAPPING: \n");
    printf("THE FIRST NUMBER IS:%d\n",a);
    printf("THE SECOND NUMBER IS:%d\n",b);

    return 0;


}