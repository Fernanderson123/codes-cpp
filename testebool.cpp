#include <iostream>
using namespace std;
int main (){
	string nome;
	bool ehseunome=false;
	do {cin >> nome;
	
	if (nome=="Anderson"){
		ehseunome=true;
		cout << "Eh seu nome" << endl;
	}	else {ehseunome=false;
		cout << "Nao eh seu nome" << endl;
	}
	} while (ehseunome);
	return 0;
}
