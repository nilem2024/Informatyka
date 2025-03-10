#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;

    int i = 2;
    while (i <= N) {
        cout << i << endl;
        i += 2;  // Zwiększamy o 2, żeby przejść do kolejnej liczby parzystej
    }

    return 0;
}

