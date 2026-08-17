#include <stdio.h>
int main() {

    int choice;

    float a, b;

    do {

        printf("CALCULATOR\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");

        scanf("%d", &choice);

        switch(choice) {
            case 1:
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("%.2f\n", a + b);
            break;

             case 2:
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("%.2f\n", a - b);
            break;

             case 3:
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);
            printf("%.2f\n", a * b);
            break;

             case 4:
            printf("Enter first number: ");
            scanf("%f", &a);
            printf("Enter second number: ");
            scanf("%f", &b);

            if(b == 0) {
                printf("Cannot divide by zero!");
            } else {
                printf("%.2f\n", a / b);
            }
            break;
            case 5:
            printf("Exiting...");
            break;

            default:
            printf("Invalid option!");
            break;
        }
    } while(choice != 5);

    return 0;
}