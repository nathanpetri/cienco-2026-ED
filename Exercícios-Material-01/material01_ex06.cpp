#include <iostream>

using namespace std;
#define DIAS 5

int main() {
    float temperaturas[DIAS];
    float soma = 0, media = 0;
    float menor = 0, maior = 0;
    int diasAbaixoMedia = 0;

    cout << "Digite as temperaturas medias dos 365 dias do ano:" << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];

        soma += temperaturas[i];

        if (i == 0) {
            menor = temperaturas[i];
            maior = temperaturas[i];
        } else {
            if (temperaturas[i] < menor)
                menor = temperaturas[i];

            if (temperaturas[i] > maior)
                maior = temperaturas[i];
        }
    }

    media = soma / DIAS;

    for (int i = 0; i < DIAS; i++) {
        if (temperaturas[i] < media) {
            diasAbaixoMedia++;
        }
    }

    cout << "\nMenor temperatura do ano: " << menor << endl;
    cout << "Maior temperatura do ano: " << maior << endl;
    cout << "Temperatura media anual: " << media << endl;
    cout << "Dias com temperatura abaixo da media anual: "
         << diasAbaixoMedia << endl;

    return 0;
}
