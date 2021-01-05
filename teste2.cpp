#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{

    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 24;
    salario = 5800.5;
    altura = 1.83;
    genero = 'M';
    nome = "Gabriel Costa";

    cout << fixed << setprecision(2);
    cout << "IDADE = " << idade << endl;
    cout << "SALARIO = " << salario << endl;
    cout << "ALTURA = "  << altura << endl;
    cout << "GENERO = " << genero  << endl;
    cout << "NOME = " << nome << endl;

    return 0;
}
