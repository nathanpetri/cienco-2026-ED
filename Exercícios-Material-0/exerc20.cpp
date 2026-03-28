#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero >= 0) {
        for (int i = numero; i >= 0; i--) {
            cout << i << endl;
        }
    } else {
        cout << "Numero invalido! Deve ser positivo." << endl;
    }

    return 0;
}
