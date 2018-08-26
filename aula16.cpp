#include<iostream>
#include<string.h>

using namespace std;

/*
    Vetores de characteres string em C
*/

//Função para retornar a string de entrada ao contrário
void inverte(char nome[]){
    int tam;
    
    //for( tam = 0; nome[tam]; tam++);
    tam = strlen(nome);
    for(int i =tam; i>=0; i--){
        cout << nome[i];
    }
    
}

int main(){

    char nome[] = {'J','o','s','e','n','i','l','d','o','\0'};
    cout << nome << endl;
    
    int i = 0;
    while(nome[i]){
        cout << nome[i];
        i++;
    }
    cout << endl;
    
    char nome1[] = "Josenildo";
    int j = 0;
    cout << nome1 << endl;
    while(nome1[j]){
        cout << nome1[j++];
    }
    cout << endl;
    
    int k =0;
    do{
        cout << nome1[k];
    }while(nome1[k++]);
    cout << endl;

    inverte(nome1);
    cout << endl;

    if(isalpha(nome[0])){
        cout << "Caractere alfabetico" << endl;
    }else{
        cout << "Caractere numerico" << endl;
    }

    if(isdigit(nome1[0])){
        cout << "É numero" << endl;
    }else{
        cout << "É letra" << endl;
    }

    //isupper verifica se é maiuscula, islower verifica se é minuscula
    if(isupper(nome[0])){
        cout << "É maiuscula" << endl;
    }else{
        cout << "É minuscula" << endl;
    }
    /*
    isspace: verifica se é um caractere de espaço em branco.
    strlen: retorna o numero de caracteres de uma string.
    strcmp(str1, str2): compara duas strings, retorna 0 se for iguais.
    tolower: retorna o caractere em minusculo.
    toupper: retorna o caractere em maiusculo.
    strcat(dest, ori): concatena duas strings guardando na primeira variável de entrada.
    strstr: verifica se uma string ocorre na outra(vê se é uma substring de outra).
    */

    char name[100], sobrenome[100];
    cout << "Digite seu nome: ";
    cin >> name;
    cout << "DIgite seu sobrenome: ";
    cin >> sobrenome;
    strcat(name, sobrenome);
    cout << "Seu nome: " << name << endl;

    return 0;
}