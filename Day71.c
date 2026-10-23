#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved to info.txt");

    return 0;
}
