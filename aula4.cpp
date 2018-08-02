#include <iostream>

using namespace std;

int main(){

    int  n1, n2;
    float resultado;
    n1 = 10;
    n2 = 20;
    n1++;
    n1--;
    n1 += 1;
    n1 -= 1;
    n1 *= 1;
    resultado =  n1 % n2;
    cout << resultado << endl;

    int n;
    n = (10 + 20) / 2;
    cout << n << endl;

    int num = 10;

    cout << num <<endl;
    cout << num++ << endl;
    cout << ++num << endl;
    return 0;
}