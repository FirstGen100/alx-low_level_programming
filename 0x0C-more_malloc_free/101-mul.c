#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Check if num1 and num2 contain only digits
    for (int i = 0; i < len1; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            exit(98);
        }
    }
    for (int i = 0; i < len2; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            exit(98);
        }
    }

    // Convert num1 and num2 to integers
    int int1 = atoi(num1);
    int int2 = atoi(num2);

    // Compute the product and print the result
    int product = int1 * int2;
    printf("%d\n", product);

    return 0;
}
