#include <iostream>
using namespace std;

int main() {
int const n = 4; 
string nome [n];
string cpf [n];
string email [n];
string telefone [n];

  for (int i = 0; i < n; i++) {
    cout << "\n Para realizar o cadastro informe o nome, cpf, email e telefone separados por um espaço. \n";
    cin >> nome [i];
    cin >> cpf[i];
    cin >> email [i];
    cin >> telefone [i];
  }

  for (int i=0; i<n; i++){
   cout << "\n" << nome [i] << " - " << cpf[i] << " - " << email[i] << " - " << telefone[i] << endl;
  }

return 0;
}
