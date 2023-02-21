#include <iostream>


using namespace std;


int main() {

	int edad = 0;

	cout << "Ingrese su edad: ";
	cin >> edad;

	if (edad >= 18) {
		cout << "Usted es mayor de edad"<<endl;
	}
	else{
		cout << "Usted es menor de edad"<<endl;
	}

	system("pause");
	return 0;
}