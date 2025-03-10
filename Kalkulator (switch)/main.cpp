#include <iostream>
using namespace std;

int main() {
    int a, b;
    char znak;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;

    switch(znak) {
        case '+':
            cout << "Wynik: " << a + b << endl;
            break;
        case '-':
            cout << "Wynik: " << a - b << endl;
            break;
        case '*':
            cout << "Wynik: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Wynik: " << a / b << endl;
            } else {
                cout << "Blad! Nie mozna dzielic przez 0." << endl;
            }
            break;
        default:
            cout << "Nieznany znak dzialania!" << endl;
            break;
    }

    return 0;
}
