#include<iostream>

using namespace std;
/*
    Constantes:
*/
int main(){
    const double PI = 3.1415;
    //PI = 2.12;    Não pode mudar valor.
    cout << PI << endl;
    const int vet[]={1,2,3};
    const int* p1;
    int const* p2;
    int* const p3 = new int [3];
    const char* const p4 = "Josenildo";
    p1 = &vet[0];
    p2 = &vet[1];
    p1 = &vet[2];
    //*p2 = 5;  Não pode mudar valor da variável pelo ponteiro, mas pode mudar ponteiro;
    cout <<"p1: " << p1 << endl << "p2: " << p2 << endl;
    *p3 = 1;
    *(p3+1) = 2;
    *(p3+2) = 3;
    //p3++;     Não pode mudar valor de ponteiro, mas pode o valor da variável ao qual esta apontando.
    cout << "p3: "<<endl << *p3 <<endl;
    cout << *(p3+1) << endl;
    cout << *(p3+2) << endl;
    /*p4++;
    *(p4+1) = 'a';  Não pode mudar nem valor de ponteiro, nem de variável apontada por ele.
    */

    int vett[4];    //é do tipo int* const
    int* pt;
    //vett = pt;


    return 0;
}