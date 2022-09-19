#include <stdio.h>
typedef char string[1024];
#include <string.h>
typedef int bool;
#define FALSE 0
#define TRUE 1

int main()
{
    int age, cine, mcdon, again;
    string sexe, mcdo, non, exemple, O, N;
    bool sport;
    strcmp(exemple, non) == 0;
    while (again = 1)
    {
        printf("Quel âge avez vous ?\n");
        scanf("%d", &age);
        printf("Etes vous une femme ou un homme?\n");
        scanf("%s", sexe);
        printf("Combien de fois par mois vous rendez vous au cinéma?\n");
        scanf("%d", &cine);
        printf("Préférez vous le Quick ou le Mac Donald ?\n");
        scanf("%s", mcdo);
        printf("Combien de fois par mois vous y rendez vous ?\n");
        scanf("%d", &mcdon);
        printf("Pratiquez vous un sport? (1=oui 0=non)\n");
        scanf("%d", &sport);
        if (sport == 1)
        {
            printf("Le sport que vous pratiquez se trouve-t-il dans cette liste ?\n (foot,tennis,basket,judo,natation)");
            scanf("%s", exemple);
        }
        printf("Réponse de votre questionnaire:\n %d ans\n %s\n %d fois au cinéma par mois\n Préfère le %s entre le Quick et le Mcdo et s'y rend %d fois par mois\n pratique %d sport\n dans la liste : %s\n", age, sexe, cine, mcdo, mcdon, sport, exemple);

        printf("Recommencer le questionnaire ?   (1=oui)(0=non):\n");
        scanf("%d", &again);
        if (again == 0)
        {
            break;
        }
    }
}
