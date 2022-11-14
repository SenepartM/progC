#include <stdio.h>
#include <stdlib.h>

int PGCD(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



int main()
{
  int nbr1, nbr2, pgcd, i;
  printf("----------------PGCD----------------\n");
    printf("Entrez deux entiers: ");
    scanf("%d %d", &nbr1, &nbr2);
    printf("PGCD de %d et %d = %d", nbr1, nbr2, PGCD(nbr1,nbr2));
    return 0;
}