#include <iostream>
using namespace std;

void converterIdade(int dias, int &anos, int &meses, int &dias_restantes) {
    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias_restantes = dias % 30;
}

int main() {
    int dias, anos, meses, dias_restantes;
    cout << "Digite a idade em dias: ";
    cin >> dias;

    converterIdade(dias, anos, meses, dias_restantes);

    cout << "Anos: " << anos << ", Meses: " << meses << ", Dias: " << dias_restantes << endl;

    return 0;
}
