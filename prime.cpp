#include <stdio.h>

int is_prime(int n) {
    int i;
    
    if (n <= 1) {
        return 0;
    }
    
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (is_prime(n)) {
        printf("%d is prime.\n", n);
    } else {
        printf("%d is not prime.\n", n);
    }
    
    return 0;
}
