#include <iostream>

using namespace std;

int main()
{
    int nacimiento = 0;

    cout << "Ingrese su anio de nacimiento: ";
    cin >> nacimiento;

    if (nacimiento >= 1900 && nacimiento <= 1999) {
        cout << "Usted es del siglo 20" << endl;
    }
    else if (nacimiento >= 2000 && nacimiento <= 2100) {
        cout << "Usted es del siglo 21" << endl;
    }
    else {
        cout << "Usted no es del siglo 20 ni del siglo 21" << endl;
    }

    system("pause");
    return 0;
}

