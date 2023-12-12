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




struct Produto
{
    char nome[200];
    float preco;
    int quantidadeEstoque;
};







float calcularValorTotal(struct Produto *produto)
{
    return produto[0].preco * produto[0].quantidadeEstoque;
}








void realizarCompra(struct Produto *produto)
{
    int quantidadeComprada;
    printf("Digite a quantidade a ser comprada: ");
    scanf("%d", &quantidadeComprada);

    if (quantidadeComprada > 0 && quantidadeComprada <= produto->quantidadeEstoque)
    {
        produto[0].quantidadeEstoque -= quantidadeComprada;
        printf("Compra realizada com sucesso!\n");
    }
    else
    {
        printf("Quantidade inválida ou estoque insuficiente.\n");
    }
}













void consultarEstoque(struct Produto *produto)
{
    printf("Nome: %s\n", produto[0].nome);
    printf("Preço: R$ %.2f\n", produto[0].preco);
    printf("Quantidade em estoque: %d\n", produto[0].quantidadeEstoque);
    printf("Valor total em estoque: R$ %.2f\n", calcularValorTotal(produto));
}






int main()
{

    setlocale(LC_ALL, "portuguese");


struct Produto produtoDaLoja;
    int opcao;

    printf(produtoDaLoja.nome, "Camiseta His");
    produtoDaLoja.preco = 49.99;
    produtoDaLoja.quantidadeEstoque = 200;

    do
    {
        
        printf("\nMenu:\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa\n");
        printf("Escolha a opção: ");
        sleep(1);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            realizarCompra(&produtoDaLoja);
            break;
        case 2:
            consultarEstoque(&produtoDaLoja);
            break;
        case 3:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);





getchar();
    return 0;
}
