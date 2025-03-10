#include <iostream>
using namespace std;

int main() {
    int tablica[5];

    // Wczytanie 5 liczb od użytkownika
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Zamiana liczb ujemnych na zera
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }

    // Wyświetlenie zmodyfikowanej tablicy
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
