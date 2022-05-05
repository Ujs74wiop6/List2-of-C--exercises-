/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 12)Escrever um programa que leia 15 números, um de cada vez, e conte quantos 
 * destes valores são negativos. Exiba a quantidade de números negativos digitados.  
 *
 * Created on 2 de maio de 2022, 14:20
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <valarray>

using namespace std;

int main(int argc, char** argv) {
    int contador, num, neg;
    neg = 0;
    num = 0;
    contador = 0;
    for (contador = 0; contador <= 15; contador++) {
        cout << "Digite um numero: " << endl;
        cin >> num;
        if (num < 0) {
            neg++;
        }
    }
    cout << "Foram encontrados: " << neg << " números negativos" << endl;
    return 0;
}

