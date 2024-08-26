#include <iostream>
using namespace std;

int fibonacciRecursivo(int n) {
    if (n < 0) {
        cout << "Erro: n deve ser maior ou igual a zero." << endl;
        return -1;
    }
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int fibonacciIterativo(int n) {
    if (n < 0) {
        cout << "Erro: n deve ser maior ou igual a zero." << endl;
        return -1;
    }
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int anterior = 0, atual = 1, proximo;
