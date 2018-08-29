#include<iostream>

using namespace std;

/*
    Ponteiros:
*/
void foo(int n){
    n=30;
}

void fooPont(int* n){
    *n = 40;
}

int main(){

    int var = 10;
    int* pvar;      //declarando o ponteiro
    pvar = &var;    /*Inicializando o ponteiro passando
                      como entrada um endereço de uma variável*/
    cout << *pvar << endl;//Imprimindo o valor que está no endereço apontado pelo ponteiro
    *pvar = 20;     //modificando a variável a partir do ponteiro
    foo(var);
    cout << var << endl;
    fooPont(&var);  //Modificando o valor da variável a partir de uma função externa(com ponteiros)
    cout << var << endl;

    int* vet = new int[10];
    //*vet[0] = 10;
    vet[1] = 20;
    cout << vet << endl;
    cout << (vet +1) << endl;
    cout << *(vet + 1) << endl;

    int aux[10];
    aux[4] = 10;
    cout << aux[3] << endl;

    int aux1[4];
    cout << "Digite um número: ";
    cin >> *(aux1);
    cout << "Você digitou: " << aux1[0] << endl;

    cout << "Digite outro número: ";
    cin >> *(aux1 + 1);
    cout << "Você digitou: " << aux1[1] << endl;

    return 0;
}