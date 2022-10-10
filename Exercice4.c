#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    char str[100];
    printf("Saisir votre chaine\n");
    gets(str);

    printf("%s\n", str);
    for (i = 0; i < strlen(str); ++i) {
        printf("%c", tolower(str[i]));
    }
    printf("\n");
}