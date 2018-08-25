#include<iostream>

using namespace std;
/*
    Funções: sobrecarga
*/
void mensagem(int n){ //Função que imprime o numero de entrada
    cout << "Número: " << n << endl;
}
void mensagem(){//Função que imprime o hello world
    cout << "Hello world" << endl;
}

int soma(int n1, int n2){
    return n1 + n2;
}
int soma(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(){
    mensagem(10);
    mensagem();

    cout << soma(3, 6) << endl;
    cout << soma(5, 7, 10) << endl;

    return 0;
}