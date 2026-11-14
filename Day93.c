#include <stdio.h>
3
enum StudentIndex {
    FIRST = 0,
    MAX_STUDENTS = 100
};

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS) {
        return 1;
    }

    struct Student students[MAX_STUDENTS];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    enum StudentIndex topper = FIRST;

    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topper].marks) {
            topper = (enum StudentIndex)i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", students[topper].name, students[topper].marks);

    return 0;
}

