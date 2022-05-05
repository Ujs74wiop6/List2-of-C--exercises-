/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 10)Escreva um programa para ler um número inteiro (considere que serão lidos 
 * apenas valores positivos e inteiros) e escrever se é par ou ímpar.
 *
 * Created on 2 de maio de 2022, 13:33
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num >= 0) {
        if (num % 2 == 0) {
            cout << "O número: " << num << " é par" << endl;
        }
        if (num % 2 != 0) {
            cout << "O número: " << num << " é impar" << endl;
        }
    } else {
        cout << "Valor inválido" << endl;
    }

    return 0;
}

