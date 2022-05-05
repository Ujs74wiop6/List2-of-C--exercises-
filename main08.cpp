/* 
 * File:   main.cpp
 * Author: Fabricio
 * 
 * 8)O cardápio de um carrinho de lanche é o seguinte: 
 * Especificação	Código	Preço
 * Cachorro quente	100	 9,20
 * Bauru simples	101	12,00
 * Bauru com ovo	102	13,00
 * Hamburger	        103     10,00
 * Cheeseburguer	104	12,00
 * Refrigerante Lata	105	 5,00
 * Água                 106	 3,00
 * Escrever um programa que leia o código do item pedido, a quantidade do item e 
 * calcule o valor a ser pago por aquele lanche. Considere que a cada 
 * execução somente será calculado um item. Informe que código 
 * inválido caso seja digitado algo diferente.
 *
 * Created on 2 de maio de 2022, 13:27
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    int opc;
    float quant, total;
    cout << "--Cardápio do Carrinho de lanche--" << endl;
    cout << "---------------------------------" << endl;
    cout << "ESPECIFICAÇÃO - CÓDIGO - PREÇO" << endl;
    cout << "Cachorro quente - 100 - 9,20" << endl;
    cout << "Bauru simples --- 101 - 12,00" << endl;
    cout << "Bauru com ovo --- 102 - 13,00" << endl;
    cout << "Hamburger ------- 103 - 10,00" << endl;
    cout << "Cheeseburguer --- 104 - 12,00" << endl;
    cout << "Refrigerante Lata 105 - 5,00" << endl;
    cout << "Água ------------- 106 - 3,00" << endl;
    cout << "---------------------------------" << endl;
    cout << "Faça seu pedido, digitando a código do produto que o deseja: " << endl;
    cin >> opc;
    if ((opc > 99) && (opc < 107)) {
        if (opc == 100) {
            cout << "Você pediu o Cachorro-Quente - {no valor de 9,20}" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 9.20);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 101) {
            cout << "Você pediu o Bauru-simples - {no valor de 12,00}" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 12.00);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 102) {
            cout << "Você pediu o Bauru com ovo - {no valor de 13,00 }" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 13.00);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 103) {
            cout << "Você pediu o Hamburger - {no valor de 10,00}" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 10.00);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 104) {
            cout << "Você pediu o Cheeseburguer - {no valor de 12,00}" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 12.00);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 105) {
            cout << "Você pediu o Refrigerante Lata - {no valor de 5,00 }" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 5.00);
            cout << "O total a ser pago é: " << total << endl;
        }
        if (opc == 106) {
            cout << "Você pediu a Água - {no valor de 3,00}" << endl;
            cout << "Qual a quantidade que você vai querer? ";
            cin >> quant;
            total = (quant * 3.00);
            cout << "O total a ser pago é: " << total << endl;
        }
    } else {
        cout << "Valor inválido " << endl;
    }
    return 0;
}