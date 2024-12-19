
#include <iostream>
using namespace std;

// Vremetraenje: globalen, localen, staticen

int globalna = 1;

void f(){
	
	int localna = 1;
	static int staticna = 1;

	globalna++;
	localna++;
	staticna++;

	cout << "globalna: " << globalna << endl;
	cout << "localna: " << localna << endl;
	cout << "staticna: " << staticna << endl;
	cout << "------------------" << endl;

}

int main()
{
	f();
	f();

	return 0;

}
