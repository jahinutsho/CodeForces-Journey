#include<stdio.h>

int main() {
    int n, i;
    int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;

    scanf("%d", &n);

    int x; 
    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0)
            even_count++;
        else
            odd_count++;

        if (x > 0)
            positive_count++;
        else if (x < 0)
            negative_count++;
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count); 
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);

    return 0;
}
