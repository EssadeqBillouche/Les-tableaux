#include"stdio.h"

int main()
{
        int i, y;
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
                printf("element No %d, est %d \n", i+1, Tab[i]);
        }
        return 0;
}
