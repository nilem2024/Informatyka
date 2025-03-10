#include <iostream>
using namespace std;

int main() {
    int macierz[2][3];
    int transponowana[3][2];

    // Wczytanie 6 liczb do tablicy 2x3
    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
        }
    }

    // Tworzenie transpozycji
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transponowana[j][i] = macierz[i][j];
        }
    }

    // Wyświetlenie transponowanej macierzy
    cout << "Transponowana macierz:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transponowana[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
