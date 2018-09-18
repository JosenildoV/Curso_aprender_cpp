#include <iostream>

using namespace std;
/*
    argc e argv[] od método main
    argc -> é a quantidade de argumentos que se é passado
    argv -> é um arrrray com os argumentos passados
*/
int main(int argc, char const *argv[])
{
    cout << "Quantidade de argumentos: " << argc << endl;
    cout << "argumentos passados: " << endl;
    
    for(int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    return 0;
}
