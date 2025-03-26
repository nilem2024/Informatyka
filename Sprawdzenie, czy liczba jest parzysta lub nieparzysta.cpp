#include <iostream>
using namespace std;

int Dodaj(int a, int b) {
    return a + b;
}

int main() {
    int liczba1, liczba2, suma;

    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> liczba2;

    suma = Dodaj(liczba1, liczba2);
    cout << "Suma: " << suma << endl;

    return 0;
}