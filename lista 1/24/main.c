#include <stdio.h>
#include <stdlib.h>
/*24. Leia um valor de �rea em metros quadrados m2 e apresente-o convertidoemacres.Af�rmulade convers�o �: A = M * 0.000247,
sendo M a �rea em metros quadrados e A a �rea em acres.
25. Leia um valor de �rea em acres e apresente-o convertido em
 metrosquadradosm2.Af�rmulade convers�o �: M = A * 4048.58, sendo M a �rea em metros quadrados e A a �rea em acres. */


int main()
{
    float M, A, a, m;
    printf("Area em metros quadrados: ");
    scanf ("%f", &M);
    A = M * 0.000247;
    printf ("\nconvers�o em acres: %f\n", A);
    printf ("\narea em acres: ");
    scanf ("%f", &a);
    m = a * 4048.58;
    printf ("\nArea em metros quadrados: %f", m);
    return 0;
}
