#include <stdio.h>

int main(){
    short int numeroPequeno = 32767; // Valor maximo de short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; //Valor maior q o maximo de short int
    printf("Numero pequeno atual (short int): %d\n", numeroPequeno);

    printf("\n*** Tamanho das variaveis ***\n");
    printf("Short int: %lu B - int: %lu B - long int %lu B\n", sizeof(short int), sizeof (int), sizeof(long int));
    printf("Float: %lu B - double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));



}