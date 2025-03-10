#include <iostream>
using namespace std;

int main() {
    int tablica[10];
    int min = INT_MAX;

    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];

        if (tablica[i] < min) {
            min = tablica[i];
        }
    }

    cout << "Najmniejsza liczba to: " << min << endl;

    return 0;
}
