#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

void printGender(enum Gender g) {
    switch (g) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Gender: Unknown\n");
    }
}

int main() {
    struct Person p1 = {"Alice", FEMALE};

    printf("Name: %s\n", p1.name);
    printGender(p1.gender);

    return 0;
}
