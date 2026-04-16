#include <iostream>
#include <locale>
using namespace std;

#define tam 16

int main()
{
    setlocale(LC_ALL, "");

    int num[tam];
    int par = 0, impar = 0, positivo = 0, negativo = 0, zeros = 0, mult3 = 0, mult5 = 0, multAmbos = 0, maior = 0, menor = 999999999;
    float mediaPar = 0, mediaImpar = 0, somaPar = 0, somaImpar = 0;

    for(int i = 1; i <= tam; i++){
        cout << "Entre com um numero inteiro qualquer: ";
        cin >> num[i];

        if(num[i] % 2 == 0){
            par += 1;
        }
        else{
            impar += 1;
        }

        if(num[i] > 0){
            positivo += 1;
        }
        else if(num[i] < 0){
            negativo += 1;
        }
        else{
            zeros += 1;
        }

        if(num[i] % 3 == 0){
            mult3 += 1;
        }

        if(num[i] % 5 == 0){
            mult5 += 1;
        }
        if(num [i] % 3 == 0 && num[i] % 5 == 0){
            multAmbos += 1;
        }

        if(num[i] > maior){
            maior = num [i];
        }

        if(menor > num[i]){
            menor = num[i];
        }

        if(num[i] % 2 == 0){
            somaPar += num[i];
        }

        if(num[i] % 2 != 0){
            somaImpar += num[i];
        }

    }

        mediaPar = somaPar / par;
        mediaImpar = somaImpar / impar;

        cout << "Quantidade de par    : " << par << endl;
        cout << "Quantidade de impar  : " << impar << endl;
        cout << "Quantidade positivo  : " << positivo << endl;
        cout << "Quantidade negativo  : " << negativo << endl;
        cout << "Quantidade de zeros  : " << zeros << endl;
        cout << "Qnt multiplos de 3   : " << mult3 << endl;
        cout << "Qnt multiplos de 5   : " << mult5 << endl;
        cout << "Qnt multiplos ambos  : " << multAmbos << endl;
        cout << "Maior numero digitado: " << maior << endl;
        cout << "Menor número digitado: " << menor << endl;
        cout << "Média números pares  : " << mediaPar << endl;
        cout << "Média números ímpares: " << mediaImpar << endl;
}
