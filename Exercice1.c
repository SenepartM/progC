#include <stdio.h>

int main()
{
    int i;
    double a, b, pro;
    pro = 0;
    printf("Donnez deux nombres a et b\n");
    scanf("%lf", &a);
    scanf("%lf", &b);

    for (i = 1; i <= a; i++)
    {
        pro = pro + b;
    }
    printf("le produit de a et b est %lf", pro);
}