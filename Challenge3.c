#include"stdio.h"

int main()
{
        int i, y, somme;
        somme = 0;
        printf(" le nombre d'éléments :");
        scanf("%i",&y);
        int Tab[y];
        for (i = 0; i < y; i++)
        {
                printf(" saisir le element No %d \n", i+1);
                scanf("%d", &Tab[i]);
        }
        for (i = 0; i < y; i++)
        {
                somme += Tab[i];
        }
        printf("la somme des elements  %d \n", somme);
        
        return 0;
}
