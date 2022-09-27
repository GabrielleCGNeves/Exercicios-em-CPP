#include "math.h"
#include <iostream>
using namespace std;

/*
05. Fazer  quadro resumo de subrotinas e código fonte de programa para ler o
comprimento e calcular diâmetro, calcular o raio e, finalmente, a área de um
círculo; (Faça um menu com as opções necessárias. Utilizar a simulação 3 como
referência/Modelo para fazer esse trabalho)
*/

double lerComprimento();
double calcDiametro(double comprimento);
double calcRaio(double diametro);
double calcArea(double raio);

double const PI = 3.14;

int main() {
  double valComp, valRaio, valDia, valArea;
  int tecla;

MENU:
  cout << "MENU \n1. Calcular Propriedades \n2. Encerrar" << endl;
  cin >> tecla;

  switch (tecla) {

  case 1:
    system("clear");
    valComp = lerComprimento();
    valDia = calcDiametro(valComp);
    valRaio = calcRaio(valDia);
    valArea = calcArea(valRaio);

    cout << "o valor do raio é de " << valRaio << " cm." << endl;
    cout << "o valor do diametro é de " << valDia << " cm." << endl;
    cout << "o valor do area é de " << valArea << " cm²." << endl;

    break;
  case 2:
    cout << "\nFim do programa!\n";
    system("clear");
    exit(0);
    break;
  }
  goto MENU;
}

double lerComprimento() {
  double comprimento = 0;
  cout << "Por favor, informe o valor do comprimento do circulo: ";
  cin >> comprimento;
  return comprimento;
}

double calcRaio(double diametro) {
  double raio = diametro / 2;
  return raio;
}
double calcDiametro(double comprimento) {
  double diametro = comprimento / PI;
  return diametro;
}

double calcArea(double raio) {
  double area = pow(raio, 2) * PI;
  return area;
}