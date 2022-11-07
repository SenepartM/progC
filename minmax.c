#include <stdio.h>
#include <stdlib.h>

double min(double *tab);
double max(double *tab);

int main()
{
    double liste[8] = {1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6};

    printf("Le plus petit de la liste est : %lf\nLe plus grand de la liste est : %lf\n" ,min(liste), max(liste));

    return 0;
}

double min(double *t)
{
    double Min = t[0];
    for (int i = 1; i < 8; i++)
    {
        if (t[i] < Min)
        {
            Min = t[i];
        }
    }

    return Min;
}

double max(double *t)
{
    double Max = t[0];
    for (int i = 1; i < 8; i++)
    {
        if (t[i] > Max)
        {
            Max = t[i];
        }
    }

    return Max;
}
