#include <iostream>
using namespace std;

void converterTempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int totalSegundos, horas, minutos, segundos;
    cout << "Digite o tempo de duracao em segundos: ";
    cin >> totalSegundos;

    converterTempo(totalSegundos, horas, minutos, segundos);

    cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segundos << endl;

    return 0;
}
