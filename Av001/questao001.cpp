#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  string nome[] = {"Sara Lemes", "Ricardo Jafé"};
  double salario[] = {12000, 10243.20};
  
  int idade[] = {30, 45};
  string rep = "s";
  int i=-1;
  while (rep == "s" || i < 2 ) 
  {
    system("clear");

    cout << "\n Seja bem-vindo! Digite 's' para mostrar as atualizações de "
            "pagamento e qualquer tecla para sair."
         << endl;
    cin >> rep;
     i++
        cout << "\n"
          << nome[i] << ", " << idade[i]
           << ". Houve um aumento de 10% em seu salário.\n";
      cout << "Salário Antigo: " << salario[i] << "\n";
      cout << "Salário Atual: " << salario[i] * 1.10 << endl;
    system("sleep 2");
    cout << "o programa foi finalizado.";
  }

  /*cout << nome[0] << ", " << idade[0] << ". Houve um aumento de 10% em seu
  salário.\n"; cout << "Salário Antigo: " << salario[0] << "\n"; cout <<
  "Salário Atual: " << salario[0] * 1.10;

  cout << "\n" << "\n";

  cout << nome[1] << ", " << idade[1] << ". Houve um aumento de 10% em seu
  salário.\n"; cout << "Salário Antigo: " << salario[1] << "\n"; cout <<
  "Salário Atual: " <<salario[1] * 1.10;*/
}