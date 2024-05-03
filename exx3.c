#include<stdio.h>
#include<stdlib.h>

int main(){

    /*3) Crie um algoritmo que exiba todos os números múltiplos
    de 5 no intervalo de 1 a 500.*/

    int resto;

    for(int i=1; i <= 500; i++){
        resto = i % 5;
            if(resto == 0){
                printf("%i\n", i);
            }
    }

return 0;
}
