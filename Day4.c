#include<stdio.h>
int main(){
    int a , b ,sum = 0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);


    printf("THE FIRST %d NATURAL NUMBERS ARE :",a);
    for(b=1; b<=a ; b++ ){
    printf("%d",b);
    sum += b;
    }

    printf("\n THE SUM OF FIRST %d NATURAL NUMBER IS = %d\n",a,sum);




return 0;
}