/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 5)Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor 
 * do produto após um desconto de 13%. Apresente o resultado como o abaixo:
 * Produto: <nome do produto>
 * Valor: <valor original do produto>
 * Desconto: <valor do desconto>
 * Valor Final: <valor do produto após o desconto>

 * 
 * Created on 2 de maio de 2022, 13:07
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    char nome[15];
    float valor_p, desc, valor_final;
    cout << "Informe o nome do produto: ";
    cin >> nome;
    cout << "Informe o preço desse produto ";
    cin >> valor_p;
    desc = (valor_p * 0.13);
    valor_final = (valor_p - desc);
    cout << "Produto: " << nome << endl;
    cout << "Valor: " << valor_p << endl;
    cout << "Desconto: " << desc << endl;
    cout << "Valor final: " << valor_final << endl;
    return 0;
}

