#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    int last_digit = n % 10;

    if (first_digit != 0 && last_digit % first_digit == 0) {
        printf("YES\n");
    } else if (last_digit != 0 && first_digit % last_digit == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
