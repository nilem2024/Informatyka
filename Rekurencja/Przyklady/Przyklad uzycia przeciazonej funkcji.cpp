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
	cout << "Pole kwadratu (10): " << ObliczPole(10) << endl;
	cout << "Pole kwadratu (10, 20): " << ObliczPole(10, 20) << endl;
	cout << "Pole kwadratu (6.10): " << ObliczPole(6.10) << endl;
	return 0;
}