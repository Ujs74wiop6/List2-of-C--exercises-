/* 
 * File:   main.cpp
 * Author: Fabricio
 *
 * 11)Escrever um programa que lê o número de identificação de um aluno (matrícula), 
 * 3 notas obtidas na nas atividades da disciplina e o valor da média dos 
 * exercícios (ME). Calcular a média de aproveitamento, usando a fórmula: 
 * MA=(N1+N2*2+N3*3+ME)/7
 * A atribuição de conceitos obedece a tabela abaixo:
 * Média de Aproveitamento	Conceito
 * 9,0                              A
 * 7,5 e < 9,0                      B
 * 6,0 e < 7,5                      C
 * 4,0 e < 6,0                      D
 * < 4,0                            E
 * 
 * O programa deve escrever o número do aluno (matrícula), suas notas, a média dos exercícios, 
 * a média de aproveitamento e o conceito correspondente. De acordo com o conceito exiba a 
 * ensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 * s
 * Created on 2 de maio de 2022, 13:35
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    char nome[20];
    long ra;
    float n1, n2, n3, me, ma;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    me = 0;
    ma = 0;
    cout << "***Sistema Escolar***" << endl;
    cout << "Qual o nome do aluno? " << endl;
    cin >> nome;
    cout << "Qual o registro ou número de matriculo do aluno? " << endl;
    cin >> ra;
    cout << "Qual a 1° nota? " << endl;
    cin >> n1;
    cout << "Qual a 2° nota? " << endl;
    cin >> n2;
    cout << "Qual a 3° nota? " << endl;
    cin >> n3;
    cout << "Qual a média das atividades" << endl;
    cin >> me;
    ma = (n1 + (n2 * 2) + (n3 * 3) + me) / 7;
    cout << "A sua (MA) é: " << ma << endl;
    //O sistema permite valores até 9 na veriavel (ma) {média de aproveitamento}
    //valores mais altos que isso fara o sistema returnar uma mensagem de invalidez...
    if ((ma >= 0.00) && (ma <= 10.00)) {
        if (ma >= 6.00) {
            cout << "O aluno: " << nome << endl;
            cout << "Com o (RA): " << ra << endl;
            cout << "Está: APROVADO" << endl;
        } else if (ma < 6.00) {
            cout << "O aluno: " << nome << endl;
            cout << "Com o (RA): " << ra << endl;
            cout << "Está: REPROVADO" << endl;
        }
    } else {
        cout << "Valor não permitido " << endl;
    }
    return 0;
}

