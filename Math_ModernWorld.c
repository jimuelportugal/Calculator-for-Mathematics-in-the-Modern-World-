#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
void choice1();
void choice2();
void choice3();
void choice4();
void choice5();

void choice1() {
    printf("You chose option 1\n");
}

void choice2() {
    printf("You chose option 2\n");
}

//Fibonacci Sequence 
void choice3() {
    int count;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &count);

    if (count < 1) {
        printf("Count must be at least 1.\n");
        return;
    }

    int *fib = (int *)malloc(count * sizeof(int));
    if (fib == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    fib[0] = 1;
    if (count > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < count; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    
    printf("Fibonacci sequence: ");
    for (int i = 0; i < count; i++) {
        printf("%d", fib[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    int lastFib = fib[count - 1];
    printf("Fib(%d) = %d\n", count, lastFib);

    free(fib);
}

void choice4() {
    printf("You chose option 4\n");
}

//Compound interest 
void choice5() {
    double P, j, m, t, M;

    printf("Enter principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter annual interest rate (j in percentage): ");
    scanf("%lf", &j);
    j = j / 100; // Convert percentage to decimal
    printf("Enter number of times interest applied per time period (m): ");
    scanf("%lf", &m);
    printf("Enter number of time periods (t): ");
    scanf("%lf", &t);

    M = P * pow((1 + j / m), m * t);

    printf("Compound Interest: %.2f\n", M);
}

int main() {
    int choice;
    
    printf("Please choose an option:\n");
    printf("1. Option 1\n");
    printf("2. Option 2\n");
    printf("3. Generate Fibonacci Sequence\n");
    printf("4. Option 4\n");
    printf("5. Calculate Compound Interest\n");
    
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            choice1();
            break;
        case 2:
            choice2();
            break;
        case 3:
            choice3();
            break;
        case 4:
            choice4();
            break;
        case 5:
            choice5();
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }

    return 0;
}
    