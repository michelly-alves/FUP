#include <stdio.h>
#include <stdlib.h>
/*24. Leia um valor de área em metros quadrados m2 e apresente-o convertidoemacres.Afórmulade conversão é: A = M * 0.000247,
sendo M a área em metros quadrados e A a área em acres.
25. Leia um valor de área em acres e apresente-o convertido em
 metrosquadradosm2.Afórmulade conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a área em acres. */


int main()
{
    float M, A, a, m;
    printf("Area em metros quadrados: ");
    scanf ("%f", &M);
    A = M * 0.000247;
    printf ("\nconversão em acres: %f\n", A);
    printf ("\narea em acres: ");
    scanf ("%f", &a);
    m = a * 4048.58;
    printf ("\nArea em metros quadrados: %f", m);
    return 0;
}
