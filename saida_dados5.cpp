#include <bits/stdc++.h>  /* biblioteca universal ===> inclui tudo e dispensa bibliotecas individuais. */

using namespace std;

int main ()
{
  int idade;
  double salario;
  string nome;
  char sexo;

  idade = 24;
  salario = 4560.9;
  nome = "Gabriel Costa";
  sexo = 'M';

  cout << fixed << setprecision(2);
  cout << "O funcionario " << nome << ", sexo " << sexo << ", ganha " << salario << " e tem " << idade << " anos " << endl;

 return 0;
}
