#include <stdio.h>

int main()
{
    int i,j,datos[7][5];
    for (i=0 ; i<5 ; i++)
    {
    for (j=0 ; j<7 ; j++)
        {
            if (j == 3)
            {
                if (i == 0)
                {
                    printf("\t0, ");
                }
                else
                {
                    datos[i][j]=i+j;
                    printf("\t%d, ",datos[i][j]);
                }
            }
            else
            {
                datos[i][j]=i+j;
                printf("\t%d, ",datos[i][j]);
            }
        }
    printf("\n");
        
    }
    return 0;
}
