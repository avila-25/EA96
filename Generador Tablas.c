//
// Created by ÁVILA on 08/01/2025.
//
#include <stdio.h>

int validePositiveInt(int numero) {

    if(numero >= 0) {
        printf("número guardado\n");
    }
    else if (numero <= 0) {
        printf("Tu número es negativo\n");
    }
}
void generateTable(int numero, int i) {
    printf ("\n Table of %d", numero);

    for ( i = 1; i <= 10; i++)
    {
        printf ("\n %d * %d = %d", numero, i, (numero*i));
    }
}
int getNumber(){
    int numero;
    printf("Digite un numero: ");
    scanf("%d", &numero);
    return numero;
}
int main() {
    int numero;
    int i;
    numero = getNumber(numero);
validePositiveInt(numero);
generateTable(numero,i);

        return numero;


    }
