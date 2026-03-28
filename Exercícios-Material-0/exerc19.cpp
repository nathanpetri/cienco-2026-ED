#include <iostream>

using namespace std;

int main() {
    float nota, soma = 0;
    int contador = 0;

    cout << "Digite a nota (negativo para sair):";
    cin >> nota;

    while (nota >= 0) {
        if (nota <= 10) {   // valida se está no intervalo permitido
            soma += nota;
            contador++;
        } else {
            cout << "Nota invalida! Digite novamente: ";
        }
        cout << "Digite a nova nota (negativo para sair):";
        cin >> nota;
    }

    if (contador > 0) {
        float media = soma / contador;
        cout << "Media da turma: " << media << endl;
    } else {
        cout << "Nenhuma nota valida foi digitada." << endl;
    }

    return 0;
}
