#include <stdio.h>

typedef enum {
    ROLE_ADMIN,
    ROLE_USER,
    ROLE_GUEST
} UserRole;

void displayRoleMessage(UserRole role) {
    switch (role) {
        case ROLE_ADMIN:
            printf("Welcome, Admin! You have full access to the system panel.\n");
            break;
        case ROLE_USER:
            printf("Welcome back, User! You can view and edit your profile.\n");
            break;
        case ROLE_GUEST:
            printf("Welcome, Guest! You have read-only access. Please log in for more features.\n");
            break;
        default:
            printf("Error: Unknown user role.\n");
            break;
    }
}

int main() {
    UserRole currentRole = ROLE_ADMIN;
    printf("Current Role: ADMIN\n");
    displayRoleMessage(currentRole);
    
    printf("\n"); 
    currentRole = ROLE_GUEST;
    printf("Current Role: GUEST\n");
    displayRoleMessage(currentRole);

    return 0;
}
