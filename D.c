#include <stdio.h>

int main()
{
    printf(" Alumno ");
    printf("  Mate\t   ");
    printf("Bio\t");
    printf("   Geo ");
    printf("\t   Arte ");
    printf("   Lab ");
    printf("\n");
    int array[30][6] = {{1,1,8,5,9,2},{2,1,8,5,9,2},{3,1,8,5,9,2},{4,1,8,5,9,2},{5,1,8,5,9,2},{6,1,8,5,9,2},{7,1,8,5,9,2},{8,1,8,5,9,2},{9,1,8,5,9,2},{10,1,8,5,9,2},{11,1,8,5,9,2},{12,1,8,5,9,2},{13,1,8,5,9,2},{14,1,8,5,9,2},{15,1,8,5,9,2},{16,1,8,5,9,2},{17,1,8,5,9,2},{18,1,8,5,9,2},{19,1,8,5,9,2},{20,1,8,5,9,2},{21,1,8,5,9,2},{22,1,8,5,9,2},{23,1,8,5,9,2},{24,1,8,5,9,2},{25,1,8,5,9,2},{26,1,8,5,9,2},{27,1,8,5,9,2},{28,1,8,5,9,2},{29,1,8,5,9,2},{30,1,8,5,9,2},};
    int i, cuenta = 0, total = 0, cont = 0, *ap;
    float media;
    ap = *array;
    for (i=0 ; i<180 ; i++)
    {
        if (cont == 6)
        {
            printf("\n");
            cont = 0;
        }
        printf("\t%d\t",*(ap+i));
        cont++;
        total = total + *(ap+i);
        cuenta = cuenta + 1;
    }
    printf("\n");
    printf("\n");
    media = (float)total / (float)cuenta;
    printf("La media de los alumnos es: %.2f \n", media);
    
    
    
    return 0;
}
