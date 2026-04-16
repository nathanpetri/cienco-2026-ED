#include <iostream>
#include <locale>
#include<stdlib.h>
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    float A, B, C, L;

    cout << "Entre com um valor: ";
    cin >> A;

    cout << "Entre com um valor: ";
    cin >> B;

    cout << "Entre com um valor: ";
    cin >> C;

    if(A > B && A > C){
        L = A;
    }

    else if(B > A && B > C){
        L = B;
    }

    else{
        L = C;
    }


    if(A < B + C && B < A + C && B < A + C){
        cout << endl << "Forma um triângulo do tipo: ";
    }

    else{
        cout << endl << "Não forma um triângulo" << endl;
        exit(0
    }

    if(A == B && A == C && B == C){
        cout << "Equilátero" << endl;
    }

    else if(A == B || A == C || B == C){
        cout << "Isóceles" << endl;
    }

    else if(A != B && A != C && B != C){
        cout << "Escaleno" << endl;
    }

    cout << "Tipo quanto aos ângulos: ";

    if(pow(L,2) == pow(A,2) + pow(B,2)){
        cout << "Retângulo" << endl;
    }

    else if(pow(L,2) > pow(A,2) + pow(B,2)){
        cout << "Obtusângulo" << endl;
    }

    else if(pow(L,2) < pow(A,2) + pow(B,2)){
        cout << "Acutângulo" << endl;
    }
}
