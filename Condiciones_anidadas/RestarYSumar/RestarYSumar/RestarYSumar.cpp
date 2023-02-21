#include <iostream>

using namespace std;

int main() {

	float numero1 = 0, numero2 = 0, resta = 0, esNumerico1 = 0, esNumerico2 = 0;

	cout << "Ingrese el primer numero: ";
	esNumerico1 = scanf_s("%f", &numero1);

	cout << "Ingrese un segundo numero: ";
	esNumerico2 = scanf_s("%f", &numero2);

	if (esNumerico1 == 1 && esNumerico2 == 1) {
		resta = (numero1 - numero2) + 40;

		if (resta == 0) {
			cout << "El resultado es cero" << endl;
		}
		else if (resta > 0) {
			cout << "El resultado es un numero positivo: " << resta << endl;
		}
		else {
			cout << "El resultado es un numero negativo: " << resta << endl;
		}
	}
	else {
		cout << "\nDato incorrecto, solo se aceptan numeros" << endl;
		exit(-1);
	}

	system("pause");
	return 0;
}