#include <stdio.h>

double tab[3][4];
double row, col, somme;
int i, j;

int main()
{

    printf("Saisir nombres de lignes ,max 3\n");
    scanf("%lf", &row);
    printf("Saisir nombres de colones ,max4\n");
    scanf("%lf", &col);

    printf("entrer les %lf éléments du tableau", row * col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%lf", &tab[i][j]);
        }
    }
    printf("LE TABLEAU A 2 DIMENSIONS :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%lf", tab[i][j]);
        }
        printf("\n");
    }
    somme = tab[i] + tab[j];
    printf("%lf", somme);
}
