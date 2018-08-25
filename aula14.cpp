#include <iostream>

using namespace std;
/*
    Escopo de variável:
    Uma variável global pode ser acessada em quaquer função de qualquer arquivo.
    Uma variável local só pode ser acessada pelo escopo em que ela está.
    Uma variável estática não é excluida quando sai do escopo, o valor dela é preservado.
*/

int num_global = 12;    //Variável global

void foo(){
    int num = 10;       //Variável local
    static int num_static = 1;  //Variável estática
    cout << "Variável local: " << num << endl;
    cout << "Variável global: " << num_global << endl;
    num_static++;
    cout << "Variável estatica: " << num_static << endl;
}

int main(){
    cout << num_global << endl;
    foo();
    foo();
    foo();
    

    return 0;
}