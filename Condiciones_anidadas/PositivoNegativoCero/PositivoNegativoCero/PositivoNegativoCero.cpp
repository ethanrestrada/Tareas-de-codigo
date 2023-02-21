#include <iostream>

using namespace std;

int main() {

	float numero = 0, esNumerico = 0;

	cout << "Ingrese un numero: "; 
	esNumerico = scanf_s("%f", &numero);

	if (esNumerico == 1) { // comprobar si es un numero

		if (numero == 0) {
			cout << "El numero es cero" << endl;
		}
		else if (numero > 0) {
			cout << "El numero es positivo" << endl;
		}
		else {
			cout << "El numero es negativo" << endl;
		}

	}
	else {
		cout << "Dato incorrecto, solo se aceptan numeros" << endl;
	}

	system("pause");
	return 0;
}