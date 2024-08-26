#include <iostream>
using namespace std;

void converterMinutos(int totalMinutos, int &horas, int &minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int totalMinutos, horas, minutos;
    cout << "Digite o total de minutos desde meia-noite: ";
    cin >> totalMinutos;

    converterMinutos(totalMinutos, horas, minutos);

    cout << "Hora atual: " << horas << "h" << minutos << "min" << endl;

    return 0;
}
