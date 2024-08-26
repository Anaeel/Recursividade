#include <iostream>
using namespace std;

#define MAX_M 20
#define MAX_N 25

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void calcularTransposta(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarPorK(int matriz[MAX_M][MAX_N], int M, int N, int K, int resultado[MAX_M][MAX_N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
}

void adicionarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int M, int N, int resultado[MAX_M][MAX_N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int M, N, K;
    int matriz1[MAX_M][MAX_N], matriz2[MAX_M][MAX_N], transposta[MAX_N][MAX_M], multiplicada[MAX_M][MAX_N], soma[MAX_M][MAX_N];

    cout << "Digite as dimensões M e N da matriz (M<=20, N<=25): ";
    cin >> M >> N;

    cout << "Digite os elementos da primeira matriz:\n";
    lerMatriz(matriz1, M, N);

    calcularTransposta(matriz1, transposta, M, N);

    cout << "Matriz Transposta:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Digite o valor de K para multiplicar a matriz: ";
    cin >> K;
    multiplicarPorK(matriz1, M, N, K, multiplicada);

    cout << "Matriz multiplicada por K:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << multiplicada[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Digite os elementos da segunda matriz para a soma:\n";
    lerMatriz(matriz2, M, N);

    adicionarMatrizes(matriz1, matriz2, M, N, soma);

    cout << "Soma das matrizes:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
