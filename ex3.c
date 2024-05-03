#include<stdio.h>
#include<stdlib.h>

int main(){

    /*3) Crie um algoritmo que exiba todos os números múltiplos
    de 5 no intervalo de 1 a 500.*/

    for(int i=1; i <= 500; i++){
            if(i % 5 == 0){
                printf("%i\n", i);
            }
    }

return 0;
}
