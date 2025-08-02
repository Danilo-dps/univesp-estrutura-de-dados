#include <iostream>

using namespace std;


int main(){

cout << "Explorando ponteiros e endereços de memória em C++" << endl;
cout << "==============================================" << endl;


int a = 10;
int *b = &a;
int **c = &b;

**c += 5;

cout << "Valor do tipo int a: " << a << endl;
cout << "Usando o operador &, obtém-se o endereço de mémoria do tipo int a: " << &a << endl;
cout << endl;


cout << "Usando o nome do ponteiro se obtém o endereço de memória que ele está apontando." << endl;
cout << "Usando o nome do ponteiro(o nome é b): " << b << endl;
cout << "Usando o operador &, obtém-se o endereço de mémoria do tipo ponteiro b: " << &b << endl;
cout << "Valor da variavel que b está apontando: " << *b << endl;

cout << endl;

cout << "Endereço de memória do ponteiro b, que c está apontando: " << c << endl;
cout << "Usando o operador &, obtém-se o endereço de mémoria do tipo ponteiro c: " << &c << endl;
cout << "Endereço de memória a, que por sequência está sendo apontado por b, que é apontando por c: " << *c << endl;
cout << "Valor variavel a, que está sendo apontado por b -> c: " << **c << endl;
cout << endl;

}