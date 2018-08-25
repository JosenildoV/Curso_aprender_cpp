#include <iostream>

using namespace std;
/*
    Funções
*/

bool par(int num);//Função para retornar se um número é impar ou par
void mensagem();//Função para mostrar uma mensagem

int main(){

    mensagem();

    int n;
    cout << "Digite um número: ";
    cin >> n;
    if(par(n)){
        cout << "O número " << n << " é Par!" << endl;
    }else{
        cout << "O número " << n <<" é impar!" << endl;
    }
    
    return 0;
}

void mensagem(){
    cout << "Aprendendo c++" << endl;
    //return 10;
}

bool par(int num){
    if(num%2==0){
        return true;
    }
    return false;
}