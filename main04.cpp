/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 4)Escreva um programa em C++ para ler o raio de um círculo, calcular 
 * e escrever a sua área e perímetro. Fórmulas:  perímetro =  2r  Area=πr^2  
 * onde r é o raio e π vale 3.14, ou pode ser obtido através da 
 * biblioteca (cmath), utilizando a constante M_PI.
 * 
 * Created on 2 de maio de 2022, 13:04
 */
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

int main(int argc, char** argv) {
    float r, area, perimetro;
    cout << "***Sistema para calcualar a área e perimetro de um círculo***" << endl;
    cout << "Informe o raio do círculo:";
    cin >> r;
    perimetro = 2 * M_PI*r;
    area = (M_PI * pow(r, 2));
    cout << "O perimetro desse círculo é: " << perimetro << endl;
    cout << "A area desse círculo é: " << area << endl;

    return 0;
}

