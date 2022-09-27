#include "math.h"
#include <iostream>
using namespace std;

/*
L. Elaborar um programa que efetue a leitura de três valores (a, b e c) e
apresente como resultado final a soma dos quadrado dos três valores lidos
*/

void lerN();
int calculo();
void mostrar();

int a = 0, b = 0, c = 0;

int main() {
  lerN();
  mostrar();
}

void lerN() {
  cout << "Informe, separados por espaços, três valores: ";
  cin >> a >> b >> c;
}

int calculo() { return pow(a, 2) + pow(b, 2) + pow(c, 2); }

void mostrar() {
  cout << "A soma dos quadrado dos três valores lidos é de " << calculo();
}