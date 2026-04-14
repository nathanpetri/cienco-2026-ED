/*
    Faça um programa em c++ que cadastre 10 números, ordene-os e em seguida encontre e mostre:
– O menor número e quantas vezes ele aparece no vetor;
– O maior número e quantas vezes ele aparece no vetor.
*/

#include <iostream>
#define  TAM 10

using namespace std;

    void imprimirVetor(int vetor[])
    {
        int i;
        cout << endl;

            for(i = 0; i < TAM; i++)
            {
                cout << "|" << vetor[i] << "| ";
            }
    }

    void selecionador(int vetor[TAM])
    {
        int posicaoMenor, aux, i, j;

            //A primeira posição do vetor é associada ao menor número
            for(int i = 0; i < TAM; i++)
            {
                posicaoMenor = i;

                //J assume a posição na frente da inicial, para poder comparar quem será maior
                for(j = i + 1; j < TAM; j++)
                {
                    if(vetor[j] < vetor[posicaoMenor]) //se o valor na posição J do vetor for menor que o valor pré-assumido, o menor será substituído pelo valor na posição J
                    {
                        posicaoMenor = j;
                    }
                }

                if(posicaoMenor != i) //Após realizar os testes, se a posição do menor (inicialmente 0 e após assumindo a posição J) for diferente de I, 
                                        //o vetor de posição I recebe valor do menor e o menor recebe o novo menor valor.

                {
                    aux = vetor[i];
                    vetor[i] = vetor[posicaoMenor];
                    vetor[posicaoMenor] = aux;
                }
            }
    }
    
int main()
{
    int vetor[TAM];
    int qntMenor = 0;
    int qntMaior = 0;

    for(int i = 0; i < TAM; i++)
    {
        cout << "De os valores do vetor: ";
        cin >> vetor[i];
    }

    imprimirVetor(vetor);
    cout << endl;

    selecionador(vetor);
        cout << "\nVetor reorganizado." << endl;
    imprimirVetor(vetor);

        for(int i = 0; i < TAM; i ++)
        {
            if(vetor[i] == vetor[0])
            {
                qntMenor++;
            }

            else if(vetor[i] == vetor[9])
            {
                qntMaior++;
            }
        }

    cout << "\nO menor valor se repete: " << qntMenor << " vezes.";
    cout << "\nO maior valor se repete: " << qntMaior << " vezes.";


}