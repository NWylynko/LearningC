#include <stdio.h>

int factorial(int num) {
    int x = num;
    if (num > 1) {
        x *= factorial(num - 1);
    }

    return x;
}

int main() {
    // tests
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}