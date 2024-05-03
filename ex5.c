#include<stdio.h>
#include<stdlib.h>

int main(){

/*5) Faça um programa que calcule o fatorial de um número a ser
digitado.*/

int num;
int fatorial=1;

printf("Digite um número para calcularmos o seu fatorial\n");
scanf("%i", &num);

if(num<0){
    printf("Não existe\n");
}else{
    if(num == 0){
        printf("1\n");
    }

    for(int i=num; i>= 1; i--){
        fatorial = fatorial * i;      
    }
    
}
            printf("%i\n", fatorial);

//fatorial de num = num * (num-1) * ((num-1)-1) ... * 1
return 0;
}
