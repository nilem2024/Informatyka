#include <iostream>
using namespace std;

int ObliczPole(int bok) {
		return bok * bok;
}
int ObliczPole(int dlugosc, int szerokosc) {
		return dlugosc * szerokosc;
}

double ObliczPole(double promien) {
	return 3.14159 * promien * promien;
}

int main() {
	cout << "Pole kwadratu (5): " << ObliczPole(5) << endl;
	cout << "Pole kwadratu (5, 10): " << ObliczPole(5, 10) << endl;
	cout << "Pole kwadratu (3.5): " << ObliczPole(3.5) << endl;
	return 0;
}