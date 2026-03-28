#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite um numero inteiro positivo (negativo ou zero para sair): ";
    cin >> numero;

    while (numero > 0) {
        soma += numero;  // soma = soma + numero

        cout << "Digite outro numero: ";
        cin >> numero;
    }

    cout << "A soma dos numeros digitados eh: " << soma << endl;

    return 0;
}
