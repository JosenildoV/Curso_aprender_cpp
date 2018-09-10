#include<iostream>
#include "aula13ModuloMath.h"

using namespace std;
/*
    Módulos
    para compilar: g++ -Wall -Wextra aula13main.cpp aula13ModuloMath.cpp -o programa
*/
int main(){

    int n = 5;
    cout <<"Fatorial de " << n << " é: " << fatorial(n) << endl;
    cout << "Quadrado com lado " << n << ": " << area_quadrado(n) << endl;
    cout << "Area retangulo "<< area_retangulo(n, n) << endl;
    return 0;
}