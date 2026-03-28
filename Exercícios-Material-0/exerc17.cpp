#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero entre 1 e 10: ";
    cin >> numero;

    while (numero < 1 || numero > 10) {
        cout << "Valor invalido! Digite novamente: ";
        cin >> numero;
    }

    cout << "Numero valido digitado: " << numero << endl;

    return 0;
}
