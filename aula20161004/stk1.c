#include <stdio.h>
#define N 2
#define M 4

void recebe_matriz (float matriz[N][M]);
void imprime_matriz (float matriz[N][M]);
void transpor_matriz (float matriz[N][M], float transposta[M][N]);
void imprime_transposta (float transposta[M][N]);

int main (){
    float matriz [N][M], transposta[M][N];
    recebe_matriz(matriz);
    imprime_matriz (matriz);
    transpor_matriz (matriz, transposta);
    printf("A transposta e: \n");
    imprime_matriz(transposta);
    return 0;
}

void recebe_matriz (float matriz[N][M]){ //referência
    int i, j;
    for (i=0; i<N; i++)
        for (j=0; j<M; j++) {
            printf("Entre com o elemento (%d, %d): ", i, j);
            scanf("%f", &matriz[i][j]);
        }
}

void imprime_matriz (float matriz[N][M]){
    int i, j;
    printf("\nMatriz %dx%d: \n", N, M);
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            printf("%g%c", matriz[i][j], (j != M-1)? '\t': '\n');
}

void transpor_matriz (float matriz[N][M], float transposta[M][N]){
    int i, j;
    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            transposta[j][i] = matriz[i][j];
}

void imprime_transposta (float transposta[M][N]){
    int i, j;
    printf("\nMatriz %dx%d: \n", M, N);
    for (i=0; i<M; i++)
        for (j=0; j<N; j++)
            printf("%g%c", transposta[i][j], (j != N-1)? '\t': '\n');
}
