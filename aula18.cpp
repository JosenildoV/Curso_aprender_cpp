#include <iostream>
#include<string.h>

using namespace std;
/*
    Poteiros, aula2:
*/
int main(){

    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[0];
    int** pparray = &parray;    //ponteiro que aponta para um outro ponteiro
    cout << parray << endl;
    cout << *pparray << endl;
    cout << **pparray << endl;
    int i=0;
    while(i<5){
        cout << *parray << endl;
        parray = parray + 1;
        i++;
    }
   
    char nome[100];
    cin >> nome;
    int tam = strlen(nome);

    char *p = &nome[tam];

    while(p != &nome[0]){
        cout << *p;
        p--;
    }
    cout << endl;

    return 0;
}