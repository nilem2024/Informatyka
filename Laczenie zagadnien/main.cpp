#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsz? liczb?: ";
    cin >> a;
    cout << "Podaj drug? liczb?: ";
    cin >> b;

    int suma = a + b;
    cout << "Suma: " << suma << endl;

    if (suma % 2 == 0)
        cout << "Suma jest liczb? parzyst?." << endl;
    else
        cout << "Suma jest liczb? nieparzyst?." << endl;

    return 0;
}
