//Bem vindo à geradora de relatórios diários da lojinha de artesanatos
//O objetivo deste programa é trazer indicadores diários das vendas

#include <stdio.h>
#include <stdbool.h>

int main() {
    //o objetivo é medir as interações
    //Quantos clientes entram na loja
    int quantidade_clientes;
    //Valor de produtos de madeira vendidos
    float valor_produtos_madeira;
    //Valor de produtos de cerámica vendidos
    float valor_produtos_ceramica;


    // Solicita ao usuário a quantidade de clientes que entrou na loja
    printf("Digite o número de clientes: ");
    scanf("%i", &quantidade_clientes);

    // Solicita ao usuário o valor vendido em produtos de madeira
    printf("Digite o valor total de madeiras vendidos: ");
    scanf("%f", &valor_produtos_madeira);

    // Solicita ao usuário o valor de produtos de cerámica vendidos
    printf("Digite o valor total de cerámicas vendidas: ");
    scanf("%f", &valor_produtos_ceramica);

    //Agora passamos aos cálculos dos produtos

    // Calcula o total das interacoes
    float interacoes = quantidade_clientes + valor_produtos_ceramica + valor_produtos_madeira;

    // Calcula a diferença entre peças
    float diferenca;
    if (valor_produtos_ceramica > valor_produtos_madeira)
        {
            diferenca = valor_produtos_ceramica - valor_produtos_madeira;
        } else {
            diferenca = valor_produtos_madeira - valor_produtos_ceramica;
        }

    //Fator de engajamento (apenas um indice inventado)
    float engajamento;
    engajamento = valor_produtos_ceramica * valor_produtos_madeira * quantidade_clientes;

    //Taxa cliente por cerámica
    float taxa_ceramica;
    taxa_ceramica = valor_produtos_ceramica / quantidade_clientes;

    //Taxa clientes por madeira
    float taxa_madeira;
    taxa_madeira = valor_produtos_madeira / quantidade_clientes;

 
    float total_vendas;
    total_vendas = valor_produtos_ceramica + valor_produtos_madeira;


    // Exibimos os resultados
    printf("\nO total de interações foi de: %.2f\n", interacoes);
    printf("\nA diferença de venda de produtos foi: %.2f\n", diferenca);
    printf("\nA taxa de clientes por cerâmica foi: %.2f\n", taxa_ceramica);
    printf("\nA taxa de clientes por madeira foi: %.2f\n", taxa_madeira);
    
   //O engajamento calcula se os clientes gastaram pelo menos R$ 10,00 em média
    printf("\nEngajamento dos clientes %s", (quantidade_clientes * 10) <= total_vendas ? "Positivo" : "Negativo");

    return 0;
}