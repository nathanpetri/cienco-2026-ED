/*
Elabore um programa em C++ que solicite o peso e a altura de uma determinada pessoa.
Após a digitação, exibir se esta pessoa está ou não com seu peso ideal, conforme tabela
abaixo
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

         float peso, altura, imc;

    cout << "Insira seu peso: ";
    cin >> peso;

    cout << "\nInsira sua altura: ";
    cin >> altura;

        imc = (peso / (altura * altura));

    if (imc >= 20) {

            cout <<" \nSeu IMC é: " << imc << "\nSe classifica como acima do peso";

    }

    else if (imc < 20) {

            cout << "\nSeu IMC é: " << imc << "\nSe classifica como abaixo do peso";

    }

    else {

            cout << "\nSeu IMC é: " << imc << "\nSe classifica como peso ideal";

    }

    return 0;
}
