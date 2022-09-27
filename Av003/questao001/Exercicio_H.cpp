#include "cstdlib"
#include <iostream>
using namespace std;

/*
H. Elaborar um programa que calcule e apresente o valume de uma caixa
retângular, por meio da fórmula VOLUME <- COMPRIMENTO * ALTURA * LARGURA
*/

void lerN();
int volume();
void mostrar();

int altura = 0;
int comprimento = 0;
int largura = 0;

int main() {
  lerN();
  mostrar();
}

void lerN() {
  cout << "Informe a altura, comprimento e largura da caixa: ";
  cin >> altura >> comprimento >> largura;
}

int volume() { return altura * largura * comprimento; }

void mostrar() { 
  cout << "A volume da caixa é de " << volume() << "m³."; 
  }
