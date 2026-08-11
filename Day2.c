#include<stdio.h>
int main(){
    int r;
    printf("R:");
    scanf("%d",&r);
    printf("THE RADIUS IS:%d\n",r);
    printf("THE AREA OF CIRCLE IS:%.2f\n",3.14*r*r);
    printf("THE CIRCUMFERENCE OF CIRCLE IS:%.2f\n",2*3.14*r);
    
    return 0;

}