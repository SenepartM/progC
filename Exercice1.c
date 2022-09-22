#include <stdio.h>

int main()
{
    int tab[100], i, nbr, max, min;

    printf("Entrer la taille du tableau : ");
    scanf("%d", &nbr);

    for (i = 0; i < nbr; i++)
    {
        printf("Entrer une valeur");
        scanf("%d", &tab[i]);
    }
    max = tab[0];
    min = tab[0];
    for (i = 1; i < nbr; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    printf("max est :%d \n min est : %d"\n, max, min);
}
