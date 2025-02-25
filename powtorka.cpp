#include <iostream>;
using namespace std;
int main(){
	int tablica [5];
	
	cout << " Podaj 5 liczb calkowitych: \n";
	for (int i = 0; i < 5;  i++) {
		cout << "Podaj liczbbe nr " << i+1 <<": ";
		cin >> tablica[i];
		}
		
		cout << "\nPodane liczby to:\n";
		for (int i = 0; i < 5; i++) {
			cout << tablica[i] << " ";
		}
	
	return 0;
}