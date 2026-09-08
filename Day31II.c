#include <stdio.h>  

int main() {

    int n, temp;  

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];  

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);  
    }

    for (int i = 0; i < n / 2; i++) {

        temp = arr[i];

        arr[i] = arr[n - i - 1];
     
        arr[n - i - 1] = temp;            
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0; 
}