#include <stdio.h>
long long fact(int n) {
    if (n==0) return 1;
    return n * fact(n-1);
}
int main() {
    int n=5;
    printf("Factorial of %d = %lld\n", n, fact(n));
    return 0;
}// Commit number 1
// Commit number 2
// Commit number 3
// Commit number 4
