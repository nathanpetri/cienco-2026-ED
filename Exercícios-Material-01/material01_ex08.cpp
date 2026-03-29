#include <iostream>

using namespace std;

int main() {
    int vetor[5];
    int *p = vetor;  // faz o ponteiro apontar para o primeiro elemento do vetor
    int soma = 0;
    float media;

    cout << "Digite 5 numeros:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(p + i);  // usando ponteiro
    }

    for (int i = 0; i < 5; i++) {
        soma += *(p + i);
    }

    media = soma / 5.0;

    cout << "\nMedia dos valores: " << media << endl;

    return 0;
}
