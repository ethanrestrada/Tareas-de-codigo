#include <iostream>

using namespace std;

int main() {

	int numero = 0, numero2 = 0, esNumerico = 0;
	char letra;

	cout << "Ingrese un numero entero: ";
	esNumerico = scanf_s("%d", &numero);

	if (esNumerico == 1) {

		if (numero % 2 == 0) {
			cout << "Su numero es par, ingrese una letra: ";
			cin >> letra;
			cout << "\nLetra: " << letra << endl;
		}
		else {
			cout << "Su numero es impar, ingrese otro numero: ";
			cin >> numero2;
			cout << "\nNumero: " << numero2 << endl;
		}
	}
	else {
		cout << "Dato incorrecto, solo se admiten numeros" << endl;
		exit(-1);
	}

	system("pause");
	return 0;
}