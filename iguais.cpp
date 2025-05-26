#include <stdio.h>

int main() {
    int tam;

    do{
        printf("Tam: ");
        scanf("%d", &tam);

        if (tam <= 0){
            printf("Erro! Tam tem que ser maior que 0!\n");
        }

    } while (tam <= 0);

    char vc1[tam], vc2[tam];

    for(int i = 0; i < tam; i++){
        printf("v1: ");
        scanf("%f", &vc1[i]);  
    }

    for(int i = 0; i < tam; i++){
        printf("v2: ");
        scanf("%f", &vc2[i]);  
    }

    int qtd_i = 0;

    for(int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            if (vc1[i] == vc2[j]){
                qtd_i++;
                break;
            }
        }
    }

    if(qtd_i == tam){
        printf("Iguais\n");
    } else{
        printf("Diferentes\n");
    }
}