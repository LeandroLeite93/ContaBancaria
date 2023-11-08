/*
ContaBancaria.cpp
*/  

#include <stdio.h>
#include <iostream>

int main()
{
    float saldo, valor;
    int opc = 0;

    printf("digite o saldo inicial da conta: ");
    scanf_s("%d", &saldo);

    while (opc != 4)
    {
        printf("BEM VINDO AO BANCO \n");
        printf(" 1 - SACAR \n");
        printf(" 2 - DEPOSITAR \n");
        printf(" 3 - SALDO \n");
        printf(" 4 - SAIR \n");
        printf(" OPCAO? \n");
        scanf_s("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("VALOR QUE DESEJA SACAR:\n");
            scanf_s("%f", &valor);
            if (valor < saldo) {
                printf("VALOR INSUFICIENTE NA CONTA PARA SACAR:\n");
            }
            else
            {
                saldo = saldo - valor;
                break;
            }
        case 2:
            printf("VALOR QUE DESEJA DEPOSITAR: ");
            scanf_s("%f", &valor);
            saldo = saldo + valor;
            break;
        case 3:
            printf("SALDO DA CONTA: %f\n", saldo);
            break;
        case 4: 
            printf("ATE MAIS!\n");
            break;
        default:
            printf("OPCAO INVALIDA!\n");
            break;
        }

    }
}


