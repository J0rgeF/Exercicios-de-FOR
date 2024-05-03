#include<stdio.h>
#include<stdlib.h>

int main(){

    /*6) Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez)*/

int num[9];
int quadrado;

for(int i=0; i < 9; i++){
    printf("digite seus numeros\n");
    scanf("%i", &num[i]);
}

for(int i=0; i < 9; i++){
    
    quadrado = num[i] * num [i];
    printf("o quadrado resulta em %i\n", quadrado);
}


return 0;
}
