/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 2)Escreva um programa em C++ que exiba as quatro mensagens:
 * Meu nome é: <seu nome>.
 * Sou do curso de Sistemas de Informação.
 * Estou no primeiro ano.
 * Gosto de programação!!!

 * Created on 1 de maio de 2022, 00:42
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    char nome[25];
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Meu nome é " << nome << endl;
    cout << "Sou do curso de Sistemas de Informação." << endl;
    cout << "Estou no primeiro ano." << endl;
    cout << "Gosto de programação!!!" << endl;
    return 0;
}

