#include <stdio.h>

int is_palindrome(int n) {
    int rev = 0, temp = n;
    
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    
    return n == rev;
}

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (is_palindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    
    return 0;
}
