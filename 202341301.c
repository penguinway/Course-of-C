#include <stdio.h>

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a * b == reverse(a) * reverse(b)) {
        printf("%d*%d=%d*%d\n", a, b, reverse(a), reverse(b));
    } else {
        printf("%d*%d!=%d*%d\n", a, b, reverse(a), reverse(b));
    }
    return 0;
}