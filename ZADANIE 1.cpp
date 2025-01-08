#include <iostream>
using namespace std;
int main(){
	
int N;


cout << "Podaj liczbe N: ";
cin >> N;

for (int i = 1; i <= N; i++) 

    for (int j = 1; j <= N; j++) {

        cout << i * j << "\t"; 
    }

    cout << endl;

	return 0;
}