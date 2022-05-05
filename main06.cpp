/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 6)Escreva um programa para ler um valor e escrever se é 
 * positivo ou negativo. Considere o valor zero como positivo.
 *
 * Created on 2 de maio de 2022, 13:12
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

//unsigned char u;
//unsigned int n;
//char c;
//int i;

int main(int argc, char** argv) {
    int num;
    cout << "Digite um número:" << endl;
    cin >> num;
    if (num < 0) {
        cout << "O número: " << num << " é negativo" << endl;
    } else {
        cout << "O número: " << num << " é positivo" << endl;
    }
    return 0;
}

