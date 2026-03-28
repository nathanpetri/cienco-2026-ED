#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero " << numero << " eh PAR." << endl;
    } else {
        cout << "O numero " << numero << " eh IMPAR." << endl;
    }

    return 0;
}
