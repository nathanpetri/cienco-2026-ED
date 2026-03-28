#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "\nTabuada do " << numero << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
