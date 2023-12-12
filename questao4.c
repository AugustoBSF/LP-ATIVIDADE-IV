#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

void limpatela(){
system("cls||Clear");
fflush(stdin);
}

struct ContaBancaria
{
    int numeroConta;
    char nomeTitular[200];
    float saldo;
    char tipoConta[200];
};


void depositar(struct ContaBancaria *conta, float valor)
{
    conta[0].saldo += valor;
    printf("Depósito de R$%.2f realizado com sucesso.\n", valor);
}

void sacar(struct ContaBancaria *conta, float valor)
{
    if (valor <= conta[0].saldo)
    {
        conta[0].saldo -= valor;
        printf("Saque de R$%.2f realizado com sucesso.\n", valor);
    }
    else
    {
        printf("Saldo insuficiente para realizar o saque.\n");
    }
}


void imprimirSaldo(struct ContaBancaria *conta)
{
    printf("Saldo atual da conta: R$%.2f\n", conta->saldo);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float valor;

    struct ContaBancaria minhaConta;

    minhaConta.numeroConta = 1234;
    strcpy(minhaConta.nomeTitular, "Augusto Brandão Filho");
    minhaConta.saldo = 200.00;
    strcpy(minhaConta.tipoConta, "Poupança");

   

    do
    {
        printf("\n--- Menu de Operações ---\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Consultar Saldo\n");
        printf("4. Sair\n");
        printf("Escolha a operação desejada: ");
        scanf("%d", &opcao);

        limpatela();
        printf("\tCarregando resultados...");
        sleep(1);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor para depósito: ");
            scanf("%f", &valor);
            depositar(&minhaConta, valor);
            printf("Depósito concluído!");
            break;
        case 2:
            printf("Digite o valor para saque: ");
            scanf("%f", &valor);
            sacar(&minhaConta, valor);
            printf("Saque concluído!");
            break;
        case 3:
            imprimirSaldo(&minhaConta);
            break;
        case 4:
            printf("Saindo do programa. Obrigado!\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    getchar();
    return 0;
}
