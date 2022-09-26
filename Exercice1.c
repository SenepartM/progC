#include <stdio.h>

double tab[3][4];
double row, col, SOM;
int i, j;

int main()
{

    printf("Saisir nombres de lignes ,max 3\n");
    scanf("%lf", &row);
    printf("Saisir nombres de colones ,max4\n");
    scanf("%lf", &col);

    printf("entrer les %.lf éléments du tableau", row * col);

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
            printf("%.2lf\n", tab[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            SOM += tab[i][j];

    printf("Somme des éléments : %.2lf\n", SOM);
}
