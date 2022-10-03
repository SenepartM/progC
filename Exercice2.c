#include <stdio.h>

int main()
{
    double t[3][4], m[3], moy, moy1, moy2;
    int i, j, c;
    printf("entrer les 12 éléments du tableau");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%lf", &t[i][j]);
        }
    }

    printf("LE TABLEAU A 2 DIMENSIONS :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2lf\n", t[i][j]);
        }
        printf("\n");
    }

    moy = t[0][0] + t[0][1] + t[0][2] + t[0][3];
    moy = moy / 4;
    moy1 = t[1][0] + t[1][1] + t[1][2] + t[1][3];
    moy1 = moy1 / 4;
    moy2 = t[2][0] + t[2][1] + t[2][2] + t[2][3];
    moy2 = moy2 / 4;

    m[0] = moy;
    m[1] = moy1;
    m[2] = moy2;
    for (c = 0; c < 3; c++)
    {
        printf("Moyenne de la ligne %d \n%lf\n", c + 1, m[c]);
    }
}