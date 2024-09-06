#include"stdio.h"

main()
{
    int taile;
    int temp;

    printf("donner la tail du tablaux");
    scanf("%d",&taile);
    int tab[taile];

    for(int i = 0; i < taile; i++)
    {
        printf("donner la nomber numero %d", i);
        scanf("%d",&tab[i]);
    }

    for (int i = 0; i < taile; i++)
    {
        for (int j = 0; j < taile; j++)
        {
            if(tab[j] > tab[i])
            {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }

        }
    }
    for(int i = 0; i < taile; i++)
    {
        printf( "%d >", tab[i]);
    }
    


}