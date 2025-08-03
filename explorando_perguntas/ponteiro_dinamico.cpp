#include <iostream>

using namespace std;

int main(){

int* ptrDinamico = new int; // Pede memória para um inteiro na Heap
*ptrDinamico = 2025;       // Coloca o valor 2025 nesse novo local

delete ptrDinamico;          // DEVOLVE a memória para o sistema. Essencial!
ptrDinamico = nullptr;       // Boa prática: aponta o ponteiro para nulo após deletar.

int numeros[5] = {10, 20, 30, 40, 50};
int* ptrArray = numeros; // O nome de um array funciona como um ponteiro para o 1º elemento

cout << *ptrArray << endl;             // Imprime 10
cout << *(ptrArray + 1) << endl;       // Imprime 20 (vai para o próximo int)
cout << *(ptrArray + 2) << endl;       // Imprime 30

}