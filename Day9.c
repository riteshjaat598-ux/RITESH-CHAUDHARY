#include<stdio.h>
#include<math.h>
int main(){
    double a , b ,c ;
    double  discriminant, root1, root2, realPart, imagPart ;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

     if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("The equation has infinite solutions.\n");
            } else {
                printf("The equation is invalid (contradiction).\n");
            }
        } else {
            printf("This is a linear equation.\n");
            root1 = -c / b;
            printf("Root = %.2lf\n", root1);
        }
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Category: Roots are Real and Distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        
        printf("Category: Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
         } 
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Category: Roots are Complex and Imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
