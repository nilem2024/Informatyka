#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Podaj pelny tekst: ";
    getline(cin, text);
    cout << "Wprowadzono tekst: " << text << endl;
    return 0;
}