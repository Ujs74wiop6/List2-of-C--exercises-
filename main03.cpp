/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 3)Escreva um programa em C++ que receba o nome, o endereço e o telefone 
 * de um aluno e exiba todas essas informações, uma em cada linha.
 * 
 * Created on 1 de maio de 2022, 01:08
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char name[15], endereco[30];
    long tel;
    cout << "Qual seu nome?" << endl;
    cin >> name;
    cout << "Qual o seu endereço?" << endl;
    cin >> endereco;
    cout << "Qual seu telefone?" << endl;
    cin >> tel;
    cout << "Seu nome é: " << name << endl;
    cout << "Seu endereço é: " << endereco << endl;
    cout << "Seu telefone é: " << tel << endl;
    return 0;
}

