#include <iostream>

using namespace std;

int main()
{
    int salario = 0;

    cout << "Ingrese su salario mensual: ";
    cin >> salario;

    if (salario > 2800) {
        cout << "Su salario es mayor al minimo" << endl;
    }
    else if (salario == 2800) {
        cout << "Su salario es igual al minimo" << endl;
    }
    else {
        cout << "Su salario es menor al minimo" << endl;
    }


    system("pause");
    return 0;
}

