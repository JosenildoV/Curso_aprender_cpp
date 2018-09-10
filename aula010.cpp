#include <iostream>

using namespace std;

/*
    Estrutura FOR
*/

int main(){
    int i;
    for( i = 0; i <= 100; i++)
    {
        cout << i << endl;
    }
    
    int i1 = 0;
    for(; i1 <= 100; i1++)
    {
        cout << i1 << endl;
    }

    int i2=0;
    for(;;){
        if(i2>100){
            break;
        }
        cout << i2 << endl;
        i2++;
    }

    //Calculo do Fatorial:

    int num, fat = 1;
    cout << "Digite um número: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        fat = fat * i;
    }
    cout << "Fatorial: " << fat << endl;

    return 0;
}