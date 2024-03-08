#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <chrono>
using namespace std;
int main()
{
    const int tamanhoArranjo = 100;
    int arranjo[tamanhoArranjo];
    
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i <= tamanhoArranjo; i++)
    {
        arranjo[i] = rand() % 1001;
    }
    
    cout<< "Conteudo não ordenado: "<<endl;
    for (int c = 0; c <= tamanhoArranjo; c++)
    {
        cout<< arranjo[c] << " | ";
    }
    
    cout << endl;
    
    auto iniciaOrdem = chrono::high_resolution_clock::now();

    sort(begin(arranjo), end(arranjo) + 1);
    
    auto fimOrdem = chrono::high_resolution_clock::now();
    
    auto duracaoOrdem = chrono::duration_cast<chrono::microseconds>(fimOrdem - iniciaOrdem);
    
    cout << "Conteudo ordenado: "<< endl ; 
    for (int k = 0; k <= tamanhoArranjo; k++)
    {
        cout<< arranjo[k] << " | ";
    }
    
    cout << endl << endl;

    cout<<"Tempo de execução para ordem: " << duracaoOrdem.count() << " microssegundos" << endl;
    
    return 0;
  
  
}
