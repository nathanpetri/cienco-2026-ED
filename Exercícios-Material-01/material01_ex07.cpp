#include <iostream>

using namespace std;

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int *p = vetor;  // ponteiro apontando para o primeiro elemento

    // Leitura dos valores
    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(p + i);  // usando ponteiro para armazenar
    }

    cout << "\nOrdem normal:\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << *(p + i) << " ";
    }

    cout << "\n\nOrdem inversa:\n";
    for (int i = (TAMANHO-1); i >= 0; i--) {
        cout << *(p + i) << " ";
    }

    return 0;
}
