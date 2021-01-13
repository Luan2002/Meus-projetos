#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1, num2, soma, sub, multi, div;
        cout << "Bem vindo nesta calculadora" << endl;
        cout <<"Digite o primeiro numero: " <<endl;
        cin >> num1;
        cout <<"Digite o segundo numero:" <<endl;
        cin >> num2;
        soma  = num1 + num2;
        sub   = num1 - num2;
        multi = num1 * num2;
        div   = num1 / num2;
        cout <<"Resultado da soma: " << soma  <<endl;
        cout <<"Resultado da subtracao: " << sub <<endl;
        cout <<"Resultado do Produto: " << multi <<endl;
        cout <<"Resultado da divisao:" << div <<endl;

        system("Pause");
    return 0;
}
