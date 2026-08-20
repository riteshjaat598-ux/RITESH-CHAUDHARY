#include<stdio.h>
int main(){
  float cost_price , selling_price , profit , loss , percentage ;
   printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);
     if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;
        
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
  }