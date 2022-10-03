#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], revert[100];
    int t, i, j;

    printf(" Entrez une chaîne de caractère :  ");
    scanf("%s", string);

    j = 0;
    t = strlen(string);

    revert[t] = '\0';
    for (i = t - 1; i >= 0; i--)
    {
        revert[j++] = string[i];
    }
    revert[i] = '\0';

    printf(" Chaîne de caractère après inversion = %s", revert);

    return 0;
}