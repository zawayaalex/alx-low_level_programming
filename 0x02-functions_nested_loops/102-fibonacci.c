#include <stdio.h>

int main() {
    int n = 50;
    int fib[n];
    
    // First two numbers in the sequence
    fib[0] = 1;
    fib[1] = 2;
    
    // Generate the Fibonacci sequence
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    // Print the first 50 Fibonacci numbers in the specified format
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i < n - 1) {
            printf(", ");
        } else {
            printf("\n");
        }
    }
    
    return 0;
}
