#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    
    int arr[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d\n", even, odd);
    
    return 0;
}