/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 7)Reescreva o programa do exercício anterior (exercício 6) considerando 
 * o zero como neutro, ou seja, se for digitado o valor zero, escrever a palavra zero.
 *
 * Created on 2 de maio de 2022, 13:21
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cout << "Digite um número:" << endl;
    cin >> num;
    if (num < 0) {
        cout << "O número: " << num << " é negativo" << endl;
    } else if (num == 0) {
        cout << "O número: " << num << " é zero {neutro}" << endl;
    } else {
        cout << "O número: " << num << " é positivo" << endl;
    }
    return 0;
}

