#include <stdio.h>

int main(){
    int opcao, num1, num2, resultado; 

    while (opcao != 3){
       
        printf("\nqual operacao deseja executar:");
        printf("\nDigite:");
        printf("\n1. Soma");
        printf("\n2. Subtracao");
        printf("\n3. Sair\n");
        scanf("%d", &opcao);


        switch (opcao){
            case 1:
                printf("Digite o primeiro numero:");
                scanf("%d", &num1);
                printf("Digite o segundo numero:");
                scanf("%d", &num2);

                resultado = num1 + num2;
                printf("o resultado da soma eh: %d \n", resultado);
                break;
            case 2:
                printf("Digite o primeiro numero:");
                scanf("%d", &num1);
                printf("Digite o segundo numero:");
                scanf("%d", &num2);

                resultado = num1 - num2;
                printf("o resultado da subtracao eh: %d \n", resultado);
                break;
            case 3:
                break;
            default:
                printf("numero invalido\n");
            break;
        }

    }
    
    return 0;
}