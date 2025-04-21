#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        for (int num = x + 1; num < y; num++)
        {
            if (num % 2 != 0)
            {
                sum += num;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}