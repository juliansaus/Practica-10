#include <stdio.h>
#define N 5
#define M 4

int main()
{
    int array[N][M] = {{6,1,8,5},{5,9,4,7},{9,1,2,4},{8,2,6,1},{0,3,5,8}};
    int i, cuenta = 0, total = 0, cont = 0, *ap;
    float media;
    ap = *array;
    for (i=0 ; i<20 ; i++)
    {
        if (cont == 4)
        {
            printf("\n");
            cont = 0;
        }
        printf("%d\t",*(ap+i));
        cont++;
        total = total + *(ap+i);
        cuenta = cuenta + 1;
    }
    printf("\n");
    printf("\n");
    media = (float)total / (float)cuenta;
    printf("La media del arreglo es: %.2f \n", media);
    
    return 0;
}

