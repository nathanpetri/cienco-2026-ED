/******************************************************************************

O programa deve executar um loop while que só termina quando o usuário digitar 0

A cada iteração, o usuário informa:
Código da operação:
• 1 → Depósito
• 2 → Saque
• 3 → Consulta
• 4 → Relatório parcial
• 0 → Encerrar sistema

Saldo inicial:
• Começa com R$ 1000


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{


int escolha = -1; 
int deposito;
int saque;
float saldo = 1000;
float totalDepositado = 0;
float totalSacado = 0;
int numOperacoes = 0;
float maiorDeposito = 0;
float maiorSaque = 0;


    while (escolha != 0 ){
        
        cout << "\n-----------------------------------\n";
        cout << "1 - Depósito \n2 - Saque \n3 - Consulta \n4 - Relatório parcial \n0 - Encerrar sistema \nCom qual operação deseja prosseguir: ";
        cin >> escolha;
        
        switch (escolha) {
            
            case 1:
        
                cout << "Insira o valor que deseja depositar: R$";
                cin >> deposito;
                
                    if (deposito < 0){
                        cout << "Valor inválido!\n";
                    }
                    else{
                        saldo += deposito;
                        cout << "Depósito realizado com sucesso!\n";
                        
                        // Atualizando os controles internos
                        totalDepositado += deposito;
                        numOperacoes++; // Conta que uma operação foi feita
                        
                        // Verifica se este depósito é o maior já feito
                        if (deposito > maiorDeposito) {
                            maiorDeposito = deposito;
                        }
                    }
                        break;                    
           case 2:                     
                
                cout << "Insira o valor que deseja sacar: R$";
                cin >> saque;
                
                    if (saque > saldo){
                        cout << "Saldo Insuficiente!\n";
                    }
                    else if (saque > (saldo / 2)){
                        cout << "Saque de alto valor realizado com sucesso!\n";
                        saldo -= saque;
                        
                       // Atualizando os controles internos
                        totalSacado += saque;
                        numOperacoes++;
                        

                        if (saque > maiorSaque) {
                            maiorSaque = saque;
                        }
                    }
                        
                    else {
                        saldo -= saque;
                        cout << "Saque realizado com sucesso!\n"; // Ponto e vírgula adicionado aqui
                        

                        totalSacado += saque;
                        numOperacoes++;
                        
                        if (saque > maiorSaque) {
                            maiorSaque = saque;
                        }
                    }
                        break;
            
            case 3:
                cout << "Saldo atual: R$" << saldo << "\n";
                numOperacoes++; 
                break;
                
            case 4:

                cout << "\n=== RELATÓRIO PARCIAL ===\n";
                cout << "Total depositado: R$" << totalDepositado << "\n";
                cout << "Total sacado: R$" << totalSacado << "\n";
                cout << "Número de operações realizadas: " << numOperacoes << "\n";
                cout << "Maior depósito realizado: R$" << maiorDeposito << "\n";
                cout << "Maior saque realizado: R$" << maiorSaque << "\n";
                cout << "=========================\n";
                numOperacoes++; 
                break;
                
            case 0:
                cout << "Encerrando o sistema...\n";
                break;
                
            default:
  
                cout << "Opção inválida! Tente novamente.\n";
                break;
        }
        
    }
    
    cout << "\nSistema Encerrado. Saldo final em caixa: R$" << saldo << "\n";
    
    return 0;
}