#include <iostream>
using namespace std;
/*
    Vetores/Arrays:
        tipo nome[];
*/
int main(){
    
    int vetor[100];
    for(int i = 0; i < 100; i++)
    {
        vetor[i]=i;
    }
    for(int i = 0; i < 100; i++)
    {
        cout << vetor[i] << endl;
    }
    
    int vetor1[4] = {1,2,3,4};
    
    for(int i = 0; i < 4; i++)
    {
        cout << vetor1[i] << endl;
    }
    cout <<"Segundo elemento: " << vetor1[1] << endl;
    cout << "Ultimo elemento: " << vetor1[3] << endl;

    /*
    sizeof mostra o tamanho de uma determinavel variável em bits,
    Como o vetor1 tem 4 elementos e são int, 1 int tem 4 bits, logo o vetor1 tem tamanho 16 = 4x4*/
    cout << "tamanho do vetor: " << sizeof(vetor1) << endl;

    return 0;
}