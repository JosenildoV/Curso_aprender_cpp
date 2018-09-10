#include <iostream>

using namespace std;

int main(){
    /*
    int num = 15;
    switch(num){
    case 9:
        cout << "numero 9" << endl;
        break;
    case 10:
        cout << "numero 10" << endl;
        break;
    case 11:
        cout << "numero 11" << endl;
        break;
    default:
        cout << "numero não encontrado" << endl;
    }

    char op = 'Q';
    switch(op){
        case 'Q':
            cout << "Você saiu do sistema" << endl;
        case 'q':
            cout << "Você saiu do sistema" << endl;
            break;
        default:
            cout << "Comando inexistente" << endl;
    }*/

    /* 
    Calculadora,
    operações permitidas:
        + -> adição
        - -> subdtração
        * -> multiplicação
        / -> divisão
    */
    int num1, num2, resultado;
    char op; //operação

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite a operação: ";
    cin >> op;

    switch(op){
        case '+':
            resultado = num1 + num2;
            cout << "Soma: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Subtração: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Multiplicação: " << resultado << endl;
            break;
        case '/':
        
            if (num2 != 0) {
            
                resultado = num1 / num2;
                cout << "Divisão: " << resultado << endl;
            }else{
                cout << "Divisão por zero!!" << endl;
            }
            
            break;
        default:
            cout << "Operação inexistente. " << endl;

    }

    return 0;
}