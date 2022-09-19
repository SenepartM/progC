#include <stdio.h>

int main()
{
    double weight;
    printf("Veuillez saisir le poid de votre lettre en grammes \n");
    scanf("%lf", &weight);
    if (weight < 20)
    {
        printf("Tarif d'affranchissement pour votre lettre 3.00 frs");
    }
    if (weight >= 50)
    {
        printf("Tarif d'affranchissement pour votre lettre 5.90 frs");
    }
    if (weight >= 20 && weight < 50)
    {
        printf("Tarif d'affranchissement pour votre lettre 3.95 frs");
    }
}