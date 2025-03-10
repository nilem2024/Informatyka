#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Podaj liczbę N: ";
    cin >> N;

    cout << "Kwadraty liczb od 1 do " << N << ":" << endl;
    // Pętla for wyświetlająca kwadraty liczb
    for (int i = 1; i <= N; i++) {
        cout << i << "^2 = " << i * i << endl;
    }

    return 0;
}
