
#include <stdio.h>
#include <stdlib.h>

int puissance(int a, int b);


int main()
{

    int a, b;
    printf("Entrer A : ");
    scanf("%d", &a);
    printf("Entrer B : ");
    scanf("%d", &b);

    printf("%d puissance %d = %d.\n\n", a, b, puissance(x, y));

    return 0;
}

int puissance(int a, int b)
{
    int resultat = 1;

    for(int i = 0; i < b; i++)
    {
        resultat *= a;
    }

    return resultat;
}