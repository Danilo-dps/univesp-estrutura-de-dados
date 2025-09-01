#include <iostream>

using namespace std;

int main(){

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int* p1;
    int* p2;
    int* p3;
    int* p4;

    //*p1 = &a essa combinação é inválida
    
    cout << "Valor de a: " << a << endl;
    cout << "Endereço de a: " << &a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Endereço de b: " << &b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Endereço de c: " << &c << endl;
    cout << "Valor de d: " << d << endl;
    cout << "Endereço de d: " << &d << endl;
    cout << endl;

    p1 = &a;
    p2 = &b;
    p3 = &c;
    p4 = &d;
    cout << "Valor de p1 (endereço de a): " << p1 << endl;
    cout << "Valor de p2 (endereço de b): " << p2 << endl;
    cout << "Valor de p3 (endereço de c): " << p3 << endl;
    cout << "Valor de p4 (endereço de d): " << p4 << endl;
    cout << endl;   

    cout << "Valor apontado por p1 (valor de a): " << *p1 << endl;
    cout << "Valor apontado por p2 (valor de b): " << *p2 << endl;
    cout << "Valor apontado por p3 (valor de c): " << *p3 << endl;
    cout << "Valor apontado por p4 (valor de d): " << *p4 << endl;
    cout << endl;   

    *p1 = 100;
    *p2 = 200;
    *p3 = 300;
    *p4 = 400;

    cout << "Novo valor de a: " << a << endl;
    cout << "Novo valor de b: " << b << endl;
    cout << "Novo valor de c: " << c << endl;
    cout << "Novo valor de d: " << d << endl;
    cout << endl;

    p1 = new int;
    p2 = new int;
    p3 = new int;
    p4 = new int;

    *p1 = 1000;
    *p2 = 2000;
    *p3 = 3000;
    *p4 = 4000;
    cout << "Valor apontado por p1 (novo valor): " << *p1 << endl;
    cout << "Valor apontado por p2 (novo valor): " << *p2 << endl;
    cout << "Valor apontado por p3 (novo valor): " << *p3 << endl;
    cout << "Valor apontado por p4 (novo valor): " << *p4 << endl;
    cout << endl;   

    cout << "Endereço de p1: " << &p1 << endl;
    cout << "Endereço de p2: " << &p2 << endl;
    cout << "Endereço de p3: " << &p3 << endl;
    cout << "Endereço de p4: " << &p4 << endl;
    cout << endl;

}