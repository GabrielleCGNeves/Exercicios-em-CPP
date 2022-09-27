#include "locale"
#include "math.h"
#include <iostream>
using namespace std;

/*
III - Crie um algoritmo que tenha um vetor explicito para armazenar 5 idades e
um vetor não explicito para armazenar 5 nomes. Ao final exiba o nome a pessoa de
maior idade, menor idade, a média das idades e o saldo das idades.
*/
int idade[] = {5, 13, 51, 9, 10};
int const n = sizeof(idade) / sizeof(int);
string nome[n];
int maior = 0;
int menor = 0;
int soma = 0;
int media = 0;
int posMenorIdade = 0;
int posMaiorIdade = 0;

void ida() {

  for (int i = 0; i < n; i++) {
    if (idade[i] > maior || i == 0) {
      maior = idade[i];
      posMaiorIdade = i;
    }
    if (idade[i] < menor || i == 0) {
      menor = idade[i];
      posMenorIdade = i;
    }
    soma += (idade[i]);
  }
  media = soma / n;
}

void mostrar() {
  for (int i = 0; i < n; i++) {
    cout << "Nome: " << nome[i] << endl;
    cout << "Idade: " << idade[i] << endl << endl;
  }
  cout << "A maior idade é de " << nome[posMaiorIdade] << ", sendo " << maior
       << " anos" << endl;
  cout << "A menor idade é de " << nome[posMenorIdade] << ", sendo " << menor
       << " anos" << endl;
  cout << "Soma:" << soma << endl;
  cout << "Media:" << media << endl << endl;
}

void lerNome() {
  for (int i = 0; i < n; i++) {
    cout << "Insira um nome: " << endl;
    cin >> nome[i];
  }
}

int main() {
  int letra = 0;
menu:

  cout << "Menu \n1. Ler \n2. Exibir \n3. Sair" << endl;
  cin >> letra;

  switch (letra) {
  case 1:
    lerNome();
    ida();
    break;

  case 2:
    mostrar();
    break;

  case 3:
    exit(0);
    break;
  }

  goto menu;

  return 0;
}