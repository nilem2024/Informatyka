#include <iostream>
using namespace std;

int main() {
    int godziny;
    char pojazd;

    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;

    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;

    switch(pojazd) {
        case 'S':
            cout << "Oplata za parkowanie: " << godziny * 5 << " zl" << endl;
            break;
        case 'M':
            cout << "Oplata za parkowanie: " << godziny * 3 << " zl" << endl;
            break;
        case 'A':
            cout << "Oplata za parkowanie: " << godziny * 10 << " zl" << endl;
            break;
        default:
            cout << "Nieznany typ pojazdu!" << endl;
            break;
    }

    return 0;
}
