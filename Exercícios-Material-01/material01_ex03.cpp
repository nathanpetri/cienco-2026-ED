#include <iostream>

using namespace std;

#define NUMEROS 10

int main() {
    int A[NUMEROS], M[NUMEROS];
    int X;

    // Leitura do vetor A
    cout << "Digite 10 numeros para o vetor A:\n";
    for (int i = 0; i < NUMEROS; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    // Leitura do valor X
    cout << "\nDigite o valor de X: ";
    cin >> X;

    for (int i = 0; i < NUMEROS; i++) {
        M[i] = A[i] * X;
    }

    cout << "\nVetor M (A[i] * X):\n";
    for (int i = 0; i < NUMEROS; i++) {
        cout << "M[" << i << "] = " << M[i] << endl;
    }

    return 0;
}
