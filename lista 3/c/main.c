#include <stdio.h>
#include <stdlib.h>

int main() {
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze){
        // incrementa a idade do Chico
        chico += 0.02;
        // incrementa a idade do Ze
        ze += 0.03;
        // conta mais um ano
        ano++;
        printf("Chico: %.2f\tZe: %.2f\tAno: %d\n", chico, ze, ano);
    }
    printf("Sao necessarios %d anos!\n\n", ano);
}
