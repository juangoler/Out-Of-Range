#include <stdio.h>

int main(){

    int numero[10];
    int in = 0;
    int out = 0;

printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numero[i]);
        
    
        if(numero[i] >= 10 && numero[i] <= 15) {
            in++;
        } else {
            out++;
        }
    }

printf ("Números dentro do intervalo [10,15]: %d\n", in);
printf ("Números fora do intervalo: %d\n", out);
    return  0;
}