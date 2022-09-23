#include <stdio.h>

int i;
double tab[10], sommes;
int main()
{

    for (i = 0; i < 10; i++)
    {
        printf("Saisir valeur du tableau");
        scanf("%lf", &tab[i]);
        sommes = sommes + tab[i];
    }
    printf("La somme des éléments du tableau est %lf", sommes);
}
