#include <stdio.h>

int main()
{
    int i,j,arreglo[10][10];
    for (i=0 ; i<10 ; i++)
    {
        for (j=0 ; j<10 ; j++)
        {
            arreglo[i][j]=i+j;
            printf("\t%d ",arreglo[i][j]+1);
        
        }
        printf("\n");
    }
    printf("\n");
    
    int h,k,array[10][10];
    for (h=0 ; h<10 ; h++)
    {
        for (k=0 ; k<10 ; k++)
        {
            
            array[h][k]=h+k;
            if (h == k)
            {
                printf("\t%d ",array[h][k]+1);
            }
            else
            {
                printf("\t  ");
            }
        }
        printf("\n");
    }
    return 0;
}
