#include <iostream>

using namespace std;

int main(){

    int dinheiro = 11;

    if(dinheiro > 10){
        cout << "Eu vou ao cinema!" << endl;
    }else{
        cout << "Não vou ao cinema!" << endl;
    }

    int num = 1;
    if(num != 10){
        cout << "numero diferente de 10" << endl;   
    }

    if(num==1)
        cout << "numero igual a 1" << endl;

    int num2 = 6;
    if (num2 > 5) {
        if (num2 <10){
            cout << "numero2 maior que 5 e menor que 10" << endl;
        }
    }

    if(num2 %2==0 && num2<20){
        cout<<"Numero2 é numero par e menor que 20"<<endl;
    }

    bool b = 10 <  20;
    bool b1 = true;
    if(b &&b1){
        cout << "Usando boolean nos ifs" << endl;
    }

    return 0;
}