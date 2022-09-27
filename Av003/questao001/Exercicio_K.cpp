#include <iostream>
using namespace std;

/*
K. Elaborar um programa que efetue a apresentação do valor da conversão em dólar
de um valor lido em real. O programa deve solicitar o valor da cotação do dólar
e também a quantidade de reais disponível com o usuário, para que seja
apresentado o valor em moeda americana.
*/

double lerDolar();
double qtdReais();
double conversao();
void mostrar();

int main() { mostrar(); }

double lerDolar() {
  double valorDolar = 0;
  cout << "Insira o valor da cotação do dólar: ";
  cin >> valorDolar;
  return valorDolar;
}

double qtdReais() {
  double reais = 0;
  cout << "Insira qual a quantidade de reais disponíveis: ";
  cin >> reais;
  return reais;
}

double conversao(double reais, double valorDolar) { return reais / valorDolar; }

void mostrar() {
  double real = qtdReais();
  double dolar = lerDolar();
  cout << "O seu saldo de R$" << real << " equivale à $"
       << conversao(real, dolar) << ".";
}