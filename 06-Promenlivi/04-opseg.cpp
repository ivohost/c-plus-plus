
#include <iostream>
using namespace std;

// Opseg: globalen, localen, block

int globalna = 1;

void f(){
	
	int localna3 = 1;

	cout << "localna3: " << localna3 << endl;
	cout << "globalna: " << globalna << endl;

	// Greska, nadvor od opseg
	// cout << "localna2: " << localna2 << endl;
	// cout << "localna3: " << localna3 << endl;	

}

int main()
{
	int localna1 = 1;

	if(true){
		int localna2 = 1;
		cout << "localna2: " << localna2 << endl;

	}

	cout << "localna1: " << localna1 << endl;
	cout << "globalna: " << globalna << endl;

	// Greska, nadvor od opseg
	// cout << "localna2: " << localna2 << endl;
	// cout << "localna3: " << localna3 << endl;

	f(); // Povik na funkcija

	return 0;

}
