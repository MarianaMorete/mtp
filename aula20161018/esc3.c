#include <stdio.h>

struct ponto{
    float x;
    float y;
}vet[];

int main(){
    FILE * arquivo;
    int npontos,i;
    char nomearq[256];
    printf("Nome do arquivo: ");
    scanf("%s", nomearq);
    gravaArq(nomearq);
    printf("Entre com a quantidade de pontos que deseja gravar: ");
    scanf("%d", npontos);
    arquivo = fopen(filename,"w");
    for(i=0; i<npontos; i++){
        vet[i].x;
        vet[i].y;
    }
    fclose(arquivo);
    return 0;
}

void gravaArq(char * filename){
    FILE * arquivo;
    arquivo = fopen(filename, "w");
    fclose(arquivo);
}
