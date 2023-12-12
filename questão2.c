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



struct Aluno
{
    char nome[200];
    char dataNascimento[200];
    float nota1;
    float nota2;
    float media;
};


float calcularMedia(struct Aluno *aluno)
{
    return (aluno[0].nota1 + aluno[0].nota2) / 2;
}


char *resultado(struct Aluno *aluno)
{
    return (aluno[0].media >= 7) ? "Aprovado" : "Reprovado";
}

int main()
{

    setlocale(LC_ALL, "portuguese");

struct Aluno alunos[5];

    for (int i = 0; i < 5; ++i)
    {
        printf("Digite dados para cada correspondente aluno: \n");

        printf("%d° Aluno :\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        limpatela();

        printf("Data de Nascimento: ");
        scanf("%s", alunos[i].dataNascimento);
        limpatela();

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        limpatela();

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        limpatela();

        
        alunos[i].media = calcularMedia(&alunos[i]);

        
    }

limpatela();


 printf("Exibindo os resultados...");
 sleep(1);
    for (int i = 0; i < 5; ++i)
    {
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
        printf("Resultado Final: %s\n", resultado(&alunos[i]));
        
    }

getchar();
    return 0;
}
