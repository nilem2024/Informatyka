#include <iostream>
#include <string>
using namespace std;

char tekst[50];
cout << "Podaj tekst (max 49 znaków): ";
cin.getline(tekst, 50);
cout << "Wprowadzono tekst: " << tekst << endl;

    return 0;
}