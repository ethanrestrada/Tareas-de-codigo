#include <iostream>

using namespace std;

int main()
{
	int numero = 0;

	cout << "Ingrese un numero: ";
	cin >> numero;

	if (numero % 2 == 0) {
		cout << "Su numero es par" << endl;
	}
	else {
		cout << "Su numero es impar" << endl;
	}

	system("pause");
	return 0;
}
