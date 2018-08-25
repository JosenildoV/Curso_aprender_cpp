#include<iostream>

using namespace std;
/*
    Estrutura while, exemplo
*/
int main(){

    int n =1;
    while(n <= 100){
        if(n>50){
            break;
        }
        cout << n << endl;
        n++;
    }

    int n1 = 1;
    while(n1<=100){
        if (n1 % 2 != 0){
            n1++;
            continue;
        }
        cout << n1 << endl;
        n1++;
    }

    int n2=1;
    
    while(n2 <=100){
        int i = 0;
        
        while(i < 3){
            cout << "Numero: " << n2 << endl;
            i++;
        }
        n2++;
    }
    

    return 0;
}