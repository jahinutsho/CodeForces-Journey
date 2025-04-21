#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long diff = (a * b) - (c * d);
    printf("Difference = %lld\n", diff);
    return 0;
}

