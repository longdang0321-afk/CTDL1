#include <stdio.h>
int count = 0;
int menu()
{
    printf("1. Ve hinh vuong\n");
    printf("2. Ve tam giac vuong\n");
    printf("3. ve tam giac 2\n");
    printf("4. tam giac nguoc\n");
    printf("5. ket thuc\n");
    int sel;
    printf("Lua chon: ");
    scanf("%d", &sel);
    return sel;
}

void draw_star(int n)
{
    if (n == 0)
        return;
    printf("*");
    draw_star(n - 1);
}

void draw_space(int n)
{
    if (n < 1)
        return;
    printf(" ");
    draw_space(n - 1);
}

void draw_triangle(int n)
{
    if (n == 0)
        return;

    draw_triangle(n - 1);
    draw_star(n);
    printf("\n");
}

void draw_line(int n, int i)
{
    if (i > n)
        return;
    draw_space(n - i);
    draw_star(i);
    printf("\n");
    draw_line(n, i + 1);
}

void draw_triangle_nguoc(int n)
{
    if (n == 0)
        return;
    draw_star(n);
    printf("\n");
    draw_triangle_nguoc(n - 1);
}

void draw_square(int n)
{
    if (n == 0)
        return;
    draw_star(n + count);
    printf("\n");
    count++;
    draw_square(n - 1);
}

int main()
{
    int n;
    while (1)
    {
        int sel = menu();
        switch (sel)
        {
        case 1:
            printf("Do lon: ");
            scanf("%d", &n);
            draw_square(n);
            break;
        case 2:
            printf("Do lon: ");
            scanf("%d", &n);
            draw_triangle(n);
            break;
        case 3:
            printf("Do lon: ");
            scanf("%d", &n);
            draw_line(n, 1);
            break;
        case 4:
            printf("Do lon: ");
            scanf("%d", &n);
            draw_triangle_nguoc(n);
            break;
        case 5:
            printf("BYE!!!");
            return 0;
        }
    }

    return 0;
}