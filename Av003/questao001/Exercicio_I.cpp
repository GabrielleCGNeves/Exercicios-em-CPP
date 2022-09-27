#include "math.h"
#include <iostream>
using namespace std;

/*
I. Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo
*/

void lerN();
int calculo();
void mostrar();

int a = 0;
int b = 0;

int main() {
  lerN();
  mostrar();
}

void lerN() {
  cout << "Insira o primeiro número: ";
  cin >> a;

  cout << "Insira o segundo número: ";
  cin >> b;
}

int calculo() { return pow(a - b, 2); }

void mostrar() {
  cout << "o resultado do quadrado da diferença do primeiro valor pelo segundo "
          "é de "
       << calculo();
}