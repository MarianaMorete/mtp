#include <stdio.h>

#define CADASTRAR(Cadastro, quant) \
    ({ printf("Digite quantas pessoas deseja cadastrar: "); \
        scanf("%d", quant);\
        for (int i=0; i<=quant; i++){\
        printf("Entre com o nome: "); \
        scanf ("%c \n", &Cadastro.nome); \
        printf("Entre com a idade: "); \
        scanf("%d \n", &Cadastro.idade); \
        printf("Entre com telefona: "); \
        scanf("%f \n", &Cadastro.telefone);} })

struct Cadastro {
    char nome;
    int idade;
    double telefone;
};

void mostrar_nomes(char NOME, int quant){
    int i;
    for (i=0; i<=quant; i++)
    scanf("%c \n", NOME);
}
void mostrar_idades(int IDADE, int quant){
    int i;
    for (i=0; i<=quant; i++)
    scanf("%d \n", IDADE);
}
void mostrar_telefones(int TELEFONE, int quant){
    int i;
    for (i=0; i<=quant; i++)
    scanf("%f \n", TELEFONE);
}

int main(){
    int opcao, quant=0;
    struct Cadastro NOME, IDADE, TELEFONE;
    printf("Escolha uma das opcoes:\n 1- Mostrar os nomes.\n 2- Mostrar as idades.\n 3- Mostrar os telefones.\n");
    scanf("%d", &opcao);
    switch(opcao)
    {
        case 1:
            mostrar_nomes(NOME, quant);
            break;
        case 2:
            mostrar_idades(IDADE, quant);
            break;
        case 3:
            mostrar_telefones(TELEFONE, quant);
            break;
        default:
            printf("Opcao invalida!");
    }
    return 0;
}
