/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 15)A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, 
 * coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
 * • média do salário da população; 
 * • média do número de filhos; 
 * • maior salário;
 *
 * Created on 2 de maio de 2022, 14:24
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    int habitante, filhos;
    float salario = 0, salarioM = 0, mediaS = 0, somaS = 0, mediaF = 0, somaF = 0, maiorS = 0;
    for (habitante = 1; habitante <= 15; habitante++) {
        cout << "Qual a salário da sua familia: " << endl;
        cin >> salario;
        cout << "Quantos filho a sua familia tem: " << endl;
        cin >> filhos;
        somaS = somaS + salario;
        somaF = somaF + filhos;
        if (salario > salarioM) {
            salarioM = salario;
        }
    }
    mediaS = somaS / 15;
    mediaF = somaF / 15;
    cout << "A média de salário da população é: " << mediaS << endl;
    cout << "A média de filhos é: " << mediaF << endl;
    cout << "O maior salário é: " << salarioM << endl;
    return 0;
}

