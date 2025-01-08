#include <iostream>
using namespace std;
int main(){
	
	int wysokosc, szerokosc;

// Poproś użytkownika o podanie wymiarów prostokąta
cout << "Podaj wysokosc prostokata: ";
cin >> wysokosc;
cout << "Podaj szerokosc prostokata: ";
cin >> szerokosc;

// Zewnętrzna pętla iteruje przez wiersze
for (int i = 0; i < wysokosc; i++) 
    // Wewnętrzna pętla iteruje przez kolumny
    for (int j = 0; j < szerokosc; j++) 
        // Wypisz znak *
        cout << "* ";
    
    // Przejdź do nowej linii po każdym wierszu
    cout << endl;

    return 0;
}