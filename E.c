#include <stdio.h>
#define N 4

int main()
{
    int a[N][N] = {{21, 12, 13, 24},{25, 16, 47, 38},{29, 11, 32, 54},{42, 21, 33, 10}};
    int i, j;

    for(i=0;i<4;i++)
      {
        for(j=0;j<4;j++)
          printf(" %d", a[i][j]);
        printf("\n");
      }
    printf("\n");
      
    int b[N][N] = {{21, 12, 13, 24},{25, 16, 47, 38},{29, 11, 32, 54},{42, 21, 33, 10}};
    int h, k;

    for(h=4;h>0;h--)
      {
        for(k=4;k>0;k--)
          printf(" %d", b[k][h]);
        printf("\n");
      }
    printf("\n");



    return 0;
}
