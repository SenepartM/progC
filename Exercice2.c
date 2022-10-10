#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    char src;
    int t, i, j;

    printf(" Entrez une chaîne de caractère :  ");
    gets(string);
    printf(" Saisir la lettre recherchée :  ");
    scanf("%c", &src);
    t = strlen(string);

  
       j=0;
        for (i = t-1; i >= 0; i--){
            j++;
       
        if(string[i]==src){
        
        printf("La lettre %c se situe en position %d en partant de la droite",src,j);
    }
            
        }
        
    
    return 0;
}