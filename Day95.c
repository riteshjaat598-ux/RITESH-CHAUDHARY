#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student students[], int count) {
    struct Student top = students[0];
    
    for (int i = 1; i < count; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    
    return top;
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    struct Student winner = getTopStudent(students, n);
    
    printf("Top Student: %s | Roll: %d | Marks: %d\n", winner.name, winner.roll, winner.marks);
    
    return 0;
}
