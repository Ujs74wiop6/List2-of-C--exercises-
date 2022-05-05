/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 9)Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino), 
 * construa um programa que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas: 
 * - para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
 * - para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
 * Exiba as informações incluindo o peso ideal.
 *
 * Created on 2 de maio de 2022, 13:30
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    float altura, pesoIdeal;
    char sexo;
    cout << "Sistema para calcular o peso ideal de uma pessoa" << endl;
    cout << "Qual a sua altura? " << endl;
    cin >> altura;
    cout << "Qual o seu sexo {F ou M} " << endl;
    // toupper(sexo) << endl;
    cin >> sexo;
    // toupper(sexo);
    //Prof eu tentei implementar o toupper case, mas n consegui por que o senho explicou meio por cima na ultima aula.
    switch (sexo) {
        case 'F':
            pesoIdeal = (62.1 * altura) - 44.7;
            cout << "O seu peso ideal é: " << pesoIdeal << endl;
            break;
        case 'M':
            pesoIdeal = (72.7 * altura) - 58;
            cout << "O seu peso ideal é: " << pesoIdeal << endl;
            break;
        default:
            cout << "Sexo Inváido" << endl;
    }
    return 0;
}

