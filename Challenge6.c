#include"stdio.h"

int main()
{
        int i, y, fac,min;
        
        printf(" le nombre d'éléments :");
        scanf("%i",&y);
        int Tab[y];
        for (i = 0; i < y; i++)
        {
                printf(" saisir le element No %d \n", i+1);
                scanf("%d", &Tab[i]);
        }
        printf("  le facteur de multiplication :");
        scanf("%i",&fac);
        for (i = 0; i < y; i++)
        {
              Tab[i] = Tab[i] * fac;
        }
        for (i = 0; i < y; i++)
        {
              printf("elements apres multiblication:%d \n", Tab[i]);
        }
        return 0;
}
