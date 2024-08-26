#include <iostream>
using namespace std;

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
    int esquerda = 0, direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == valor)
            return meio;

        if (vetor[meio] < valor)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }

    return -1; // valor não encontrado
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valores[] = {75, 22, 90};

    for (int i = 0; i < 3; i++) {
        int resultado = pesquisaBinaria(vetor, tamanho, valores[i]);
        if (resultado != -1)
            cout << "Valor " << valores[i] << " encontrado na posicao: " << resultado << endl;
        else
            cout << "Valor " << valores[i] << " não encontrado." << endl;
    }

    return 0;
}
