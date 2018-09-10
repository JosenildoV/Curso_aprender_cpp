#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    char c1 = 'a';
    char c2 = 'b';
    char c3 = '\'';
    cout << c1 << endl;
    cout << (int)c1 << endl;

    int soma = c1 + c2;
    cout << soma << endl;

    cout << c3 << endl;
    cout << (int)c3 << endl;
    return 0;
}