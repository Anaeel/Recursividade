#include <iostream>
using namespace std;

int somatorioRecursivo(int n) {
    if (n <= 0) {
        cout << "Erro: n deve ser maior que zero." << endl;
        return -1;
    }
    if (n == 1)
        return 1;
    return n + somatorioRecursivo(n - 1);
}

int somatorioIterativo(int n) {
    if (n <= 0) {
        cout << "Erro: n deve ser maior que zero." << endl;
        return -1;
    }
    int soma = 0;
    for (int i = 1; i <= n; i++)
        soma += i;
    return soma;
}

int main() {
    int n;
    cout << "Digite um valor para N: ";
    cin >> n;

    cout << "Somatorio Recursivo: " << somatorioRecursivo(n) << endl;
    cout << "Somatorio Iterativo: " << somatorioIterativo(n) << endl;

    return 0;
}
