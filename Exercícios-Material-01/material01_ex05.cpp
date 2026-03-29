#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    cout << "Digite o tamanho dos vetores: ";
    cin >> N;

    vector<int> A(N), B(N), Soma(N);

    cout << "\nDigite os elementos do vetor A:\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nDigite os elementos do vetor B:\n";
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    cout << "\nVetor Soma:\n";
    for (int i = 0; i < N; i++) {
        cout << "Soma[" << i << "] = " << Soma[i] << endl;
    }

    return 0;
}
