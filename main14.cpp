/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 14)Escreva um programa que receba 20 números do usuário (um de cada vez). 
 * Calcule a média dos números pares digitados.
 *
 * Created on 2 de maio de 2022, 14:23
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    int contador, soma, pardiv, par, num;
    float media;
    for (contador = 1; contador <= 20; contador++) {
        cout << "Informe um numero para fazer a media dos numeros pares: " << endl;
        cin >> num;
        if (num % 2 == 0) {
            par = par + num;
            pardiv++;
        }
    }
    media = par / pardiv;
    cout << "A média dos numeros pares é: " << media << endl;

    return 0;
}

