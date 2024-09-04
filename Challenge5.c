#include"stdio.h"

int main()
{
        int i, y, min;
        
        printf(" le nombre d'éléments :");
        scanf("%i",&y);
        int Tab[y];
        for (i = 0; i < y; i++)
        {
                printf(" saisir le element No %d \n", i+1);
                scanf("%d", &Tab[i]);
        }
        min = Tab[0];
        for (i = 0; i < y; i++)
        {
              if (Tab[i]<min)
                    min = Tab[i];
        }
        printf("le min des elements  :%d \n", min);
        
        return 0;
}
