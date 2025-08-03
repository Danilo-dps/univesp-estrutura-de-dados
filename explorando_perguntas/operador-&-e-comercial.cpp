#include <iostream>

using namespace std;

int main(){

int numero = 42;
int* ptr = &numero; 

cout << "Valor da variável 'numero': " << numero << endl;
cout << "Valor da variável 'numero': " << *ptr << endl;
cout << "Endereço da variável 'numero' (obtido com &): " << &numero << endl;
cout << "Valor do ponteiro 'ptr' (que é o endereço de 'numero'): " << ptr << endl;

cout << endl;

*ptr = 100;
cout << "Novo valor da variável 'numero': " << numero << endl;
cout << "Novo valor acessado pelo ponteiro: " << *ptr << endl;

}