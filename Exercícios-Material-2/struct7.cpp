#include <iostream>

using namespace std;

#define DIAS 5

struct TemperaturaDia {
    int dia;
    float temperatura;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    char continuar;

    do {
        TemperaturaDia vetorTemperaturas[DIAS];
        int contador = 0;

        do {
            if (contador >= DIAS) {
                cout << "Limite máximo de registros atingido (" << DIAS << ")." << endl;
                break;
            }

            cout << "Dia " << contador + 1 << " - Digite a temperatura: ";
            cin >> vetorTemperaturas[contador].temperatura;

            vetorTemperaturas[contador].dia = contador + 1;
            contador++;

        } while (true);

            for (int i = 0; i < contador; i++) {
                cout << "Dia: " << vetorTemperaturas[i].dia
                 << " - Temperatura: " << vetorTemperaturas[i].temperatura << "°C" << endl;
            }

        cout << "Deseja registrar a temperatura de outro mês? (s/n): ";
        cin >> continuar;
        cin.ignore();
        system("cls");

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
