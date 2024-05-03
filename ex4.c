#include<stdio.h>
#include<stdlib.h>

int main(){

/*4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.*/

int conta;

    for(int i=240; i<=730; i++){
        conta = i % 2;
            if(conta == 0){
                printf("%i\n", i);
            }
    }

return 0;
}
