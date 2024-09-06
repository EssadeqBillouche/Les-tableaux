#include <stdio.h>

int main() {
    int z;
    printf("taile du tableau:\n"); 
    scanf("%d",&z);
    int t[z];
    int s[z];

    for(int i = 0; i < z; i++)
    {
        printf("doneer les value du Orginal tableau : \n " );
        scanf("%d",&t[i]);
    }

    for(int i = 0; i < z; i++)
    {
        s[i] = t[i];
        
    }

    for(int i = 0; i < z; i++)
    {
         printf("%d \n", s[i]);
        
    }

    return 0;
}
