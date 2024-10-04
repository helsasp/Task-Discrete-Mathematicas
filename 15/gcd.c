#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b; 
    } else if (a > b) {
        return gcd(b, a); 
    } else {
        return gcd(a, b - a); 
    }
}

int main() {
    int a, b;

    printf("Enter two positive integers (a < b): ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0 || a >= b) {
        printf("Invalid! Make sure a < b.\n");
    } else {
        int result = gcd(a, b);
        printf("GCD of %d and %d is %d\n", a, b, result);
    }

    return 0;
}
