#include <iostream>

using namespace std;

int main() {

	float nota = 0, esNumerico = 0;
	int notaMenor = 0, notaMayor = 0;

	for (int i = 0; i < 3; i++) {
		cout << "Ingrese la nota " << i + 1 << ": ";
		esNumerico = scanf_s("%f", &nota);

		if (esNumerico == 1) {
			
			if (nota >= 60) {
				notaMayor = notaMayor + 1;
			}
			else {
				notaMenor = notaMenor + 1;
			}

		}
		else {
			cout << "Dato incorrecto, solo se aceptan numeros" << endl;
			exit(-1);
		}
	}

	if (notaMenor > 0) {

		if (notaMenor == 1) {
			cout << "Perdio 1 curso" << endl;
		}
		else {
			cout << "Perdio " << notaMenor << " cursos" << endl;
		}
	}
	else {
		cout << "Gano todos los cursos" << endl;
	}

	system("pause");
	return 0;
}