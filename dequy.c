#include <stdio.h>

void draw_line(int n)
{
    if (n == 0)
        return;
    printf("*");
    draw_line(n - 1);
}

int sum(int a, int b)
{
    if (a == b)
        return b;
    return a + sum(a + 1, b);
}

int main()
{
    draw_line(3);
    printf("\n");
    draw_line(5);
    printf("\n%d", sum(1, 10));

    return 0;
}