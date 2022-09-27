#include <iostream>
#include "cstdlib"
using namespace std;

/*
IV - Faça um algoritmo para calcular o valor de uma prestação em atraso com base na multa de 2% e também nos juros mensal de 1% sobre o valor principal. Declare vetores explicitos para a entrada de valor de prestação, valor principal[] e a quantidade de dias em atraso: dias[]. Armazene os resultados no vetor ValorPagar[5]. Ao final imprima a tabela com os vetores valorPrincipal[], dias[] e valorPagar[]. Faça um menu de controle. 
*/

int n = 0;
double valorPrincipal [] = {1500, 2700, 8945, 4600, 9000};
double valorPrestacao[] = {};
double valorPagar[5] = {};
double multa [] = {};
int dias [] = {5, 30, 171, 60, 120};

int jurosMensal(){
  for(int i = 0; i < n; i++){
    cout << "Houve uma multa de 2% em cima do valor: " << endl;
    cout << "Valor inicial: " << 
}

int main(){
int select = 0;

MENU:
  system("clear");

  cout << "Insira \n1. Consulta Simples \n2. Informações sobre os Juros \n0. Sair";
  cin >> select

    switch (select){
    case 1:
      cout << "Valor sem os juros é de" << valorPrincipal[i] << endl;
    break;

    case 2:
      cout << "Valor inicial: " << valorPrincipal[i] << endl;
      cout << "Foram acrescidos 2%, equivalente à " << multa[i] << " de multa por atraso." << endl;
      cout << "1% por mês devido aos " << dias[i] << " em atraso, totalizando " << valorPagar[i] << endl;
    break;
    }

goto MENU;
  }