/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 13)Construir um programa que calcule a média aritmética de 20 valores 
 * inteiros positivos, fornecidos pelo usuário. Exiba o resultado da média. 
 *
 * Created on 2 de maio de 2022, 14:21
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    int contador, soma, num, media;
    for (contador = 0; contador <= 20; contador++) {
        cout << "Informe um numero para fazer a media aritmética: " << endl;
        cin >> num;
        soma = soma += num;
    }
    media = soma / 20;
    cout << "A média aritimética é: " << media << endl;

    return 0;
}

