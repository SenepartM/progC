#include <stdio.h>

int main()

{
    int a = 0, b = 0, c = 0, max, min, mil;
    printf("Entrez trois nombres entiers \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b || a > c)
    {
        max = a;
    }
    if (b > a && b > c)
    {
        max = b;
    }
    if (c > a && c > b)
    {
        max = c;
    }
    if (a < b && a < c)
    {
        min = a;
    }
    if (b < a && b < c)
    {
        min = b;
    }
    if (c < a && c < b)
    {
        min = c;
    }
    if ((a > b && a < c) || (a < b && a > c))
    {
        mil = a;
    }
    if ((b > a && b < c) || (b < a && b > c))
    {
        mil = b;
    }
    if ((c > a && c < b) || (c < a && c > b))
    {
        mil = c;
    }

    printf("Rangé dans l'ordre croissant:\n %d\n %d\n %d\n", min, mil, max);
}