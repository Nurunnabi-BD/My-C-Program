#include <stdio.h>

int main() {
    int n, m, i, j, num;
    int isPrime;

    // Read the range from the user
    printf("Enter the lower limit (n): ");
    scanf("%d", &n);
    printf("Enter the upper limit (m): ");
    scanf("%d", &m);

    printf("Prime numbers between %d and %d are:\n", n, m);

    // Loop through each number in the range
    for (num = n; num <= m; num++) {
        if (num < 2) {
            continue; // Numbers less than 2 are not prime
        }

        // Assume the number is prime
        isPrime = 1;

        // Check if the number is prime
        for (j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                isPrime = 0; // num is not a prime number
                break;
            }
        }

        // If the number is prime, print it
        if (isPrime == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}