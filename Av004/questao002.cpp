#include <cstdlib>
#include <iostream>
using namespace std;

/*
B. Ler o valor correspondente ao salário mensal  (variavel SM) de um trabalhador
e também ao valor do percentual de reajuste (variavel PR) a ser atribuido.
Apresentar o valor do novo salário  (variavel NS)
*/

typedef struct variavel variavel;

struct variavel {
  double sm = 0.0;
  double pr = 0.0;
  double ns = 0.0;
};

variavel salario;

void lerSalario();
int calcNs();

int main() {
  int key = 0;
MENU:

  cout << endl << "Digite: " << endl
    << "1. Para Informar o salário"<< endl
    << "2. Para mostrar reajuste" << endl
    << "0. Sair" << endl << "> ";
  cin >> key;

  switch (key) {
    case 0:
      cout << "O programa será encerrado";
      exit(0);
    break;
   
    case 1:
      lerSalario();
    break;
    
    case 2:
      cout << endl << "O valor de reajuste será de R$" << calcNs() << endl;
    break;
  }
  goto MENU;
}

void lerSalario() {
  cout << endl << "Insira o valor do salário mensal: ";
  cin >> salario.sm;
  cout << "Insira o valor do reajuste (em porcentagem): ";
  cin >> salario.pr;
}

int calcNs() {
  salario.ns = salario.sm + (salario.sm * (salario.pr / 100));
  return salario.ns;
}