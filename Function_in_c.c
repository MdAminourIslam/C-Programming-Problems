#include <stdio.h>

// Function Declaration
int add(int a, int b);

// Main Function
int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
