#include <stdio.h>
int main()
{
    int i, c, T1[10], T2[10];

    for (i = 0; i < 10; i++)
    {
        printf("Entrer l'élément %d :", i + 1);
        scanf("%d", &T1[i]);
    }
    c = 0;
    for (i = 0; i < 10; i++)
    {
        if (T1[i] >= 0)
        {
            T2[c] = T1[i];
            c = c + 1;
        }
    }

    for (i = c; i < 10; i++)
    {
        T2[i] = 0;
    }
    printf("\n Affichage du tableau 2 contenant uniquement les éléments positifs : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", T2[i]);
    }
}