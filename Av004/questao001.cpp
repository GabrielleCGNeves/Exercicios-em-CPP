#include <cstdlib>
#include <iostream>
using namespace std;

// Elaborar um programa de computador que efetue a leitura de quatro valores
// inteiros (variáveis A, B, C e D). Ao final o programa deve apresentar o
// resultado do produto (variável P) do primeiro com o terceiro valor e o
// resultado  da  soma (variável S) do segundo com o quarto valor.

struct variaveis {
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int p = 0;
  int s = 0;
};

struct variaveis valor;

void lerValor() {
  cout << "Insira o primeiro valor: ";
  cin >> valor.a;
  cout << "Insira o segundo valor: ";
  cin >> valor.b;
  cout << "Insira o terceiro valor: ";
  cin >> valor.c;
  cout << "Insira o quarto valor: ";
  cin >> valor.d;
}

void conta1() { 
  valor.p = valor.a * valor.c; 
  cout << valor.p << endl;
}

void conta2() { 
  valor.s = valor.b + valor.d; 
  cout << valor.s << endl;
}

int main() {
  int key = 0;

MENU:

  cout << "Digite:" << endl
       << "1. Para informar os valores" << endl
       << "2. Para multiplicar o valor A pelo C" << endl
       << "3. Para somar o valor B e D" << endl
       << "0. Sair" << endl;
  cin >> key;
  
  switch (key) {
    case 0:
      cout << "O programa será encerrado" << endl;
      break;
  
    case 1:
      lerValor();
      cout << endl;
      break;
  
    case 2:
      conta1();
      cout << endl;
      break;
  
    case 3:
      conta2();
      cout << endl;
      break;
  }
  goto MENU;
}