#include <iostream>
using namespace std;

int main() {
    int punkty;
    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> punkty;

    if (punkty >= 0 && punkty <= 49) {
        cout << "Ocena niedostateczna" << endl;
    } else if (punkty >= 50 && punkty <= 69) {
        cout << "Ocena dostateczna" << endl;
    } else if (punkty >= 70 && punkty <= 84) {
        cout << "Ocena dobra" << endl;
    } else if (punkty >= 85 && punkty <= 99) {
        cout << "Ocena bardzo dobra" << endl;
    } else if (punkty == 100) {
        cout << "Ocena celujaca" << endl;
    } else {
        cout << "Niepoprawna liczba punktów!" << endl;
    }
    return 0;
}
