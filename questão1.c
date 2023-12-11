#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>



void limpatela(){
system("cls||Clear");
fflush(stdin);
}




struct Contato {
    char nome[200];
    char telefone[200];
    char email[200];
};


char* numeroTelefone(struct Contato contatos[], int tamanho, const char* nome) {
    for (int i = 0; i < tamanho; i++) {
      
        if (strcmp(contatos[i].nome, nome) == 0) {
           
            return contatos[i].telefone;
        }
    }
   
    return "Contato não encontrado";
}

int main() {
   setlocale(LC_ALL, "portuguese");
    char nomePesquisar[200];
    
    struct Contato contatos[3];

 
    for (int i = 0; i < 3; i++) {
        printf("\nDigite  correspondente ao contato...  \n");
        sleep(2)
        printf("Digite o %d° nome  : ", i + 1);
        scanf("%s", contatos[i].nome);

limpatela();

        printf("Digite o %d° número de telefone  : ", i + 1);
        scanf("%s", contatos[i].telefone);

limpatela();

        printf("Digite o %d° email : ", i + 1);
        scanf("%s", contatos[i].email);
limpatela();
    }

    
    printf("Digite o nome do contato para receber o número de telefone: ");
    scanf("%s", nomePesquisar);

    
    char* numero = numeroTelefone(contatos, 3, nomePesquisar);

    // Exibindo o número de telefone ou uma mensagem de não encontrado
    printf("Número de telefone para %s: %s\n", nomePesquisar, numero);
    return 0;
}
