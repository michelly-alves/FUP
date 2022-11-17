#include <stdio.h>
#include <stdlib.h>

/* Façaumprogramaquecontequantosnúmerosprimosexistementreaeb,ondeaebsãonúmeros informados pelo usuário. */

int main()
{
    int a, b, j, i,  count = 0, countp = 0;

    printf("Diga um numero: \n");
    scanf ("%d", &a);
    printf ("Diga outro numero\n");
    scanf("%d", &b);

        for ( j = a; j <= b; j++ ){
            for ( i = 1; i <=j; i++){
                if (j % i == 0){
                    count++;
                }
            }

        if (count == 2){
            printf("\n %d primo", j);
            countp++;
        }else{
        printf("\n%d n primo", j);
        }

        count = 0;

    }
        printf("\n%d ", countp);
    return 0;
}
