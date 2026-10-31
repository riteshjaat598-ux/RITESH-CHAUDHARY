#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("student.txt", "w");

    for(i = 0; i < n; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%49s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               name, roll, marks);
    }

    fclose(fp);
    return 0;
}