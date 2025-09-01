#include <iostream>
#include <stdio.h>

using namespace std;

 void exchange_values(int a, int *b, int &c, int *&d){
    a = 20;      
    *b = 30; 
    c = 40;
    d = *&b;    
}

int main(){

    int a = 10;
    int b = 10;
    int c = 10;
    int *d = &a;

    cout << "Antes da função:" << endl;
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    cout << "c = " << c << endl; 
    cout << "*d = " << *d << endl; 
    cout << endl;

    exchange_values(a, &b, c, *&d);

    cout << "Depois da função:" << endl;
    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    cout << "c = " << c << endl; 
    cout << "*d = " << *d << endl; 

    return 0;
}