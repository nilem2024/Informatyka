#include <iostream>
using namespace std;

int main() {
    int N, liczba_parzystych = 0;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    int i = 1;
    do {
        if (i % 2 == 0) {
            liczba_parzystych++;
        }
        i++;
    } while (i <= N);

    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << liczba_parzystych << endl;
    return 0;
}
