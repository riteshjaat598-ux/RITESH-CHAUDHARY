#include <stdio.h>

int main() {
    long long num, temp;
    int freq[10] = {0};
    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    temp = num;
    if (temp == 0) {
        freq[0] = 1;
    }
   
    while (temp > 0) {
        int digit = temp % 10;
        freq[digit]++;
        temp /= 10;
    }

    int max_freq = -1;
    int most_frequent_digit = 0;
    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }
    
    printf(" %d \n", 
           most_frequent_digit, max_freq);
           
    return 0;
}