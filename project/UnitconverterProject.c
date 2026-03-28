#include <stdio.h>

// Structure to store conversion type and value
struct Converter {
    float value;
    float result;
    int choice, subChoice;
};

int main() {
    struct Converter conv;
    char repeat;

    do {
        printf("\n===== UNIT CONVERTER SUITE =====");
        printf("\n1. Length Converter");
        printf("\n2. Weight Converter");
        printf("\n3. Temperature Converter");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &conv.choice);

        switch(conv.choice) {
            case 1:
                printf("\n--- LENGTH CONVERTER ---");
                printf("\n1. Kilometer to Meter");
                printf("\n2. Meter to Kilometer");
                printf("\nEnter option: ");
                scanf("%d", &conv.subChoice);

                printf("Enter value: ");
                scanf("%f", &conv.value);

                if(conv.subChoice == 1)
                    conv.result = conv.value * 1000;
                else if(conv.subChoice == 2)
                    conv.result = conv.value / 1000;
                else {
                    printf("Invalid option!");
                    break;
                }
                printf("Converted Value = %.2f\n", conv.result);
                break;

            case 2:
                printf("\n--- WEIGHT CONVERTER ---");
                printf("\n1. Kilogram to Gram");
                printf("\n2. Gram to Kilogram");
                printf("\nEnter option: ");
                scanf("%d", &conv.subChoice);

                printf("Enter value: ");
                scanf("%f", &conv.value);

                if(conv.subChoice == 1)
                    conv.result = conv.value * 1000;
                else if(conv.subChoice == 2)
                    conv.result = conv.value / 1000;
                else {
                    printf("Invalid option!");
                    break;
                }
                printf("Converted Value = %.2f\n", conv.result);
                break;

            case 3:
                printf("\n--- TEMPERATURE CONVERTER ---");
                printf("\n1. Celsius to Fahrenheit");
                printf("\n2. Fahrenheit to Celsius");
                printf("\nEnter option: ");
                scanf("%d", &conv.subChoice);

                printf("Enter value: ");
                scanf("%f", &conv.value);

                if(conv.subChoice == 1)
                    conv.result = (conv.value * 9/5) + 32;
                else if(conv.subChoice == 2)
                    conv.result = (conv.value - 32) * 5/9;
                else {
                    printf("Invalid option!");
                    break;
                }
                printf("Converted Value = %.2f\n", conv.result);
                break;

            case 4:
                printf("\nExiting Program... Thank You!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &repeat);

    } while(repeat == 'y' || repeat == 'Y');

    printf("\nThank you for using Unit Converter!\n");
    return 0;
}