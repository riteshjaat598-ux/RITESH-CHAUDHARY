#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); 
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n==============================\n");
    printf("      STUDENT RECORDS\n");
    printf("==============================\n");
    
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number : %d\n", students[i].rollNumber);
        printf("Name        : %s\n", students[i].name);
        printf("Marks       : %.2f\n", students[i].marks);
    }

    return 0;
}
