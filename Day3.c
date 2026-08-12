#include<stdio.h>
int main(){
    float celsius , fahrenheit ;
    printf("TEMPERATURE:");
    scanf("%f",&celsius);
    printf("TEMPERATURE IN CELCIUS IS:%f\n",celsius);

printf("TEMPERATURE IN FAHRENHEIT IS:%f\n",(celsius*9.0/5.0)+32.0);


    return 0;
}