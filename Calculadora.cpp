#include <stdio.h>
main(){
    float num1, num2;
    char operacao;
    printf("Informe um número: ");
    scanf("%f",&num1);
    printf("Selecione uma operador (+, -, *, /): ");
    scanf("%s",&operacao);
    printf("Informe outro número: ");
    scanf("%f",&num2);

    switch(operacao){
        case '+':
        printf("\nA soma dos valores é = %.1f\n", num1 + num2);
        break;
        case '-':
        printf("\nA subtração dos valores é = %.1f\n", num1 - num2);
        break;
        case '*':
        printf("\nA multiplicação dos valores é = %.1f\n", num1 * num2);
        break;
        case '/':
        if(operacao == '/' && num2 == 0){
            printf("A divisão por 0 é uma exceção\n");
            break;
        }
        printf("\nA divisão dos valores é = %.1f\n", num1 / num2);
        break;

        default:
        printf("\nOperador Invalido!\n");
        break;
    }
    return(0);
}