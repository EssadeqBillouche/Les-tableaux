#include"stdio.h"

int main()
{
        int i, y, max;
        
        printf(" le nombre d'éléments :");
        scanf("%i",&y);
        int Tab[y];
        for (i = 0; i < y; i++)
        {
                printf(" saisir le element No %d \n", i+1);
                scanf("%d", &Tab[i]);
        }
        max = Tab[0];
        for (i = 0; i < y; i++)
        {
              if (Tab[i]>max)
                    max = Tab[i];
        }
        printf("le max des elements  :%d \n", max);
        
        return 0;
}
