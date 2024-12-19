
#include <iostream>
using namespace std;

// Deklaracija na konstantna
#define KONSTANTNA1 123

int main()
{
	// Deklaracija na konstantna
	const int KONSTANTNA2 = 456;

	// KONSTANTNA1 = 789; // Greska, konstantna ne moze da se menuva
	
	cout << KONSTANTNA1 << endl;
	cout << KONSTANTNA2 << endl;

	return 0;

}
