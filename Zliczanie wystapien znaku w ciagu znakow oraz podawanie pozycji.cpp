#include <iostream>
using namespace std;
int main(){
	
	
char tekst[50];
cout << "Podaj tekst: ";
cin.getline(tekst, 50);
cout << "Wprowadzono tekst: " << tekst << endl;

cout << tekst[0]; 
cout << tekst[3]; 
cout << tekst[11];

return 0;
}