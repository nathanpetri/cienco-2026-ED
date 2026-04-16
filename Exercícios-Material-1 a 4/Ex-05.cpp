#include <iostream>

using namespace std;

int main() {
    int N;
    
    
    do {
        cout << "Informe o tamanho do vetor (entre 10 e 50): ";
        cin >> N;
        if (N < 10 || N > 50) {
            cout << "Tamanho inválido! Tente novamente.\n";
        }
    } while (N < 10 || N > 50);
    
    
    int vetor[50];
    
    cout << "\nDigite os " << N << " números:\n";
    for (int i = 0; i < N; i++) {
        cout << "Posição " << i << ": ";
        cin >> vetor[i];
    }
    
    
    int pares = 0, impares = 0;
    int positivos = 0, negativos = 0, zeros = 0;
    int mult2 = 0, mult3 = 0, mult5 = 0;
    int maior = vetor[0], menor = vetor[0]; 
    float soma = 0;
    
    for (int i = 0; i < N; i++) {
        int val = vetor[i];
        
        if (val % 2 == 0) pares++;
        else impares++;
        
        
        if (val > 0) positivos++;
        else if (val < 0) negativos++;
        else zeros++;
        
        
        if (val % 2 == 0) mult2++;
        if (val % 3 == 0) mult3++;
        if (val % 5 == 0) mult5++;
        
        
        if (val > maior) maior = val;
        if (val < menor) menor = val;
        
        soma += val; 
    }
    
    float media = soma / N;
    

    int vetorReorganizado[50];
    int idx = 0; 
    
 
    for (int i = 0; i < N; i++) {
        if (vetor[i] % 2 == 0) {
            vetorReorganizado[idx] = vetor[i];
            idx++;
        }
    }
    

    for (int i = N - 1; i >= 0; i--) { 
        if (vetor[i] % 2 != 0) {
            vetorReorganizado[idx] = vetor[i];
            idx++;
        }
    }
    

    bool temRepetido = false;
    int maisFrequente = vetor[0];
    int maxRepeticoes = 0;
    
  
    for (int i = 0; i < N; i++) {
        int contagem = 0;
        for (int j = 0; j < N; j++) {
            if (vetor[i] == vetor[j]) {
                contagem++;
            }
        }
        
        if (contagem > 1) {
            temRepetido = true;
        }
        
 
        if (contagem > maxRepeticoes) {
            maxRepeticoes = contagem;
            maisFrequente = vetor[i];
        }
    }
    

    cout << "\n================ RESULTADOS ================\n";
    
    cout << "[VETORES]\n";
    cout << "Vetor Original:     ";
    for (int i = 0; i < N; i++) cout << vetor[i] << " ";
    cout << "\n";
    
    cout << "Vetor Reorganizado: ";
    for (int i = 0; i < N; i++) cout << vetorReorganizado[i] << " ";
    cout << "\n\n";
    
    cout << "[ANÁLISE DE DADOS]\n";
    cout << "Pares: " << pares << " | Ímpares: " << impares << "\n";
    cout << "Positivos: " << positivos << " | Negativos: " << negativos << " | Zeros: " << zeros << "\n";
    cout << "Múltiplos de 2: " << mult2 << " | De 3: " << mult3 << " | De 5: " << mult5 << "\n";
    cout << "Maior valor: " << maior << "\n";
    cout << "Menor valor: " << menor << "\n";
    cout << "Média geral: " << media << "\n\n";
    
    cout << "[ANÁLISE AVANÇADA]\n";
    if (temRepetido) {
        cout << "Existem números repetidos no vetor.\n";
        cout << "O número que mais se repete é o " << maisFrequente << " (apareceu " << maxRepeticoes << " vezes).\n";
    } else {
        cout << "Não existem números repetidos no vetor.\n";
    }
    cout << "============================================\n";

    return 0;
}