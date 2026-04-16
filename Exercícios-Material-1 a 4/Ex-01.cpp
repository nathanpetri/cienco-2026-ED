#include <iostream>
#include <locale>
using namespace std;

struct dadosCliente{

    int idd;
    char doenca, fumante;
    float rendaMensal;

};

int main()
{
    setlocale(LC_ALL, "");

    dadosCliente cliente1;

    float valorPlano = 0;

    cout << "Informe sua idade: ";
    cin >> cliente1.idd;

    cout << "Possui doenças pré existentes? (S/N): ";
    cin >> cliente1.doenca;

    cout << "É fumante? (S/N): ";
    cin >> cliente1.fumante;

    cout << "Informe sua renda mensal: ";
    cin >> cliente1.rendaMensal;

    if(cliente1.idd <= 18){
        valorPlano += 100;
    }

    else if(cliente1.idd >= 19 && cliente1.idd <=40 ){
        valorPlano += 180;
    }

    else if(cliente1.idd >= 41 && cliente1.idd <=60 ){
        valorPlano += 300;
}

    else{
        valorPlano += 500;
    }

    if(cliente1.doenca == 'S' && cliente1.idd <= 40){
        valorPlano = valorPlano + (valorPlano * 0.30);
    }

    else if(cliente1.doenca == 'S' && cliente1.idd > 40){
        valorPlano = valorPlano + (valorPlano * 0.50);
    }

    if(cliente1.fumante == 'S' && cliente1.idd <= 50){
        valorPlano = valorPlano + (valorPlano * 0.20);
    }

    else if(cliente1.fumante == 'S' && cliente1.idd > 50){
        valorPlano = valorPlano + (valorPlano * 0.40);
    }

    if(cliente1.rendaMensal < 2000){
        valorPlano = valorPlano - (valorPlano * 0.20);
    }

    else if(cliente1.rendaMensal >= 2000 && cliente1.rendaMensal <= 5000){
        valorPlano = valorPlano - (valorPlano * 0.10);
    }

    cout << endl << "Valor do plano: " << valorPlano << endl;
}
