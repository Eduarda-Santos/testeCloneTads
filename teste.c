#include <stdlib.h>
#include <stdio.h>

int main(){

    int val;
    
    printf("Digite um num. int: ");
    scanf ("&d", val);

    if(val % 2 == 0){
        printf("é um número par\n");
    }
    else{
        printf("é um número ímpar\n");
    }

    return 0;
}