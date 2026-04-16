
#include <iostream>
#include <string>

using namespace std;


struct Funcionario {
    int id;
    string nome;
    float salario;
    int idade;
    int tempoEmpresa;
};

int main() {
    int N;


    do {
        cout << "Informe a quantidade de funcionarios (entre 5 e 50): ";
        cin >> N;
        if (N < 5 || N > 50) {
            cout << "Quantidade invalida! Tente novamente.\n";
        }
    } while (N < 5 || N > 50);


    Funcionario funcionarios[50];
    Funcionario atualizados[50];


    cout << "\n--- CADASTRO DE FUNCIONARIOS ---\n";
    for (int i = 0; i < N; i++) {
        cout << "\nFuncionario " << i + 1 << ":\n";
        
        cout << "ID: ";
        cin >> funcionarios[i].id;
        
        cin.ignore(); 
        
        cout << "Nome: ";
        getline(cin, funcionarios[i].nome); // 
        
        cout << "Salario: R$ ";
        cin >> funcionarios[i].salario;
        
        cout << "Idade: ";
        cin >> funcionarios[i].idade;
        
        cout << "Tempo de empresa (anos): ";
        cin >> funcionarios[i].tempoEmpresa;

 
        atualizados[i] = funcionarios[i]; 
    }


    float somaSalarios = 0;
    float maiorSalario = funcionarios[0].salario;
    float menorSalario = funcionarios[0].salario;
    int idadeMaior50 = 0;
    int tempoMaior10 = 0;


    for (int i = 0; i < N; i++) {
        float salAtual = funcionarios[i].salario;
        
        somaSalarios += salAtual;

        if (salAtual > maiorSalario) maiorSalario = salAtual;
        if (salAtual < menorSalario) menorSalario = salAtual;

        if (funcionarios[i].idade > 50) idadeMaior50++;
        if (funcionarios[i].tempoEmpresa > 10) tempoMaior10++;
    }

    float mediaSalarial = somaSalarios / N;
    int salAcimaMedia = 0;


    for (int i = 0; i < N; i++) {
        if (funcionarios[i].salario > mediaSalarial) {
            salAcimaMedia++;
        }
    }


    for (int i = 0; i < N; i++) {
        float percentualAumento = 0;


        if (atualizados[i].tempoEmpresa < 3) {
            percentualAumento += 0.05; // 5%
        } 
        else if (atualizados[i].tempoEmpresa <= 10) {
            percentualAumento += 0.10; 
        } 
        else {
            percentualAumento += 0.20; 
        }


        if (atualizados[i].idade > 50) {
            percentualAumento += 0.05; 
        }


        if (atualizados[i].salario < mediaSalarial) {
            percentualAumento += 0.05; 
        }


        atualizados[i].salario += (atualizados[i].salario * percentualAumento);
    }


    
    cout << "\n================ ANÁLISES GERAIS ================\n";
    cout << "Média salarial da empresa: R$ " << mediaSalarial << "\n";
    cout << "Maior salário: R$ " << maiorSalario << "\n";
    cout << "Menor salário: R$ " << menorSalario << "\n";
    cout << "Funcionários com salário acima da média: " << salAcimaMedia << "\n";
    cout << "Funcionários com mais de 50 anos: " << idadeMaior50 << "\n";
    cout << "Funcionários com mais de 10 anos de empresa: " << tempoMaior10 << "\n";

    cout << "\n================ LISTA ORIGINAL ================\n";
    for (int i = 0; i < N; i++) {
        cout << "ID: " << funcionarios[i].id 
             << " | Nome: " << funcionarios[i].nome 
             << " | Salário: R$ " << funcionarios[i].salario << "\n";
    }

    cout << "\n============= LISTA COM REAJUSTES ==============\n";
    for (int i = 0; i < N; i++) {
        cout << "ID: " << atualizados[i].id 
             << " | Nome: " << atualizados[i].nome 
             << " | Novo Salário: R$ " << atualizados[i].salario << "\n";
    }
    cout << "================================================\n";

}