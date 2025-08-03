#include <iostream>

using namespace std;

int main(){

int numero = 42;
int* ptr = &numero;

cout << "Acessando o valor através do ponteiro: " << *ptr << endl;

*ptr = 100;

cout << "Novo valor da variável 'numero': " << numero << endl;
cout << "Novo valor acessado pelo ponteiro: " << *ptr << endl;

}