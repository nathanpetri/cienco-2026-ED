#include <iostream>

using namespace std;

#define ALUNOS 20

int main() {
    float notas[ALUNOS];
    float soma = 0, media = 0;
    int acimaMedia = 0;

    cout << "Digite as notas dos 20 alunos:\n";
    for (int i = 0; i < ALUNOS; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = soma / ALUNOS;

    for (int i = 0; i < ALUNOS; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }

    cout << "\nMedia da turma: " << media << endl;
    cout << "Quantidade de alunos acima da media: " << acimaMedia << endl;

    return 0;
}
