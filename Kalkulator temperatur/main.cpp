#include <iostream>
using namespace std;

int main() {
    double celsius;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K':
            cout << "Temperatura w Kelwinach: " << celsius + 273.15 << " K" << endl;
            break;
        case 'F':
            cout << "Temperatura w Fahrenheitach: " << (celsius * 9 / 5) + 32 << " F" << endl;
            break;
        default:
            cout << "Nieprawidlowa jednostka!" << endl;
            break;
    }

    return 0;
}
