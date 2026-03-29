#include <iostream>
#include <string>

using namespace std;

#define NOMES 10

int main() {
    string nomes[NOMES];
    string busca;
    bool encontrado = false;

    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < NOMES; i++) {
        cout << "Nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "\nDigite um nome para buscar: ";
    cin >> busca;

    for (int i = 0; i < NOMES; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            break; // interrompe o loop se encontrar
        }
    }

    if (encontrado) {
        cout << "ACHEI" << endl;
    } else {
        cout << "NAO ACHEI" << endl;
    }

    return 0;
}
