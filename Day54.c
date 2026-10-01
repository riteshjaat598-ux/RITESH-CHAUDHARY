#include <stdio.h>
#include <math.h>

int main() {
    int n;
   
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }
    
    int total_sum = n * (n + 1) / 2;

    int x = (int)sqrt(total_sum);
  
    if (x * x == total_sum) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
