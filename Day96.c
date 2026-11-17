#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d", 
          emp.name, 
          &emp.id, 
          &emp.joiningDate.day, 
          &emp.joiningDate.month, 
          &emp.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n", 
           emp.name, 
           emp.id, 
           emp.joiningDate.day, 
           emp.joiningDate.month, 
           emp.joiningDate.year);

    return 0;
}
