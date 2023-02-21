#include <iostream>

using namespace std;

int main()
{

    int cursos = 0;

    cout << "Ingrese la cantidad de cursos que lleva actualmente: ";
    cin >> cursos;

    if (cursos < 5 || cursos >= 6) { //Se toma en cuenta el 7
        cout << "Se desconoce el semestre" << endl;
    }
    else {
        cout << "Usted esta en el primer semestre" << endl;
    }

    system("pause");
    return 0;
}