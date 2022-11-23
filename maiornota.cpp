#include <iostream>
using namespace std;
int main (){
	int nota, maior=0, contador=-1;
	do {
		cin >> nota;
		contador++;
		 if (nota>maior)
			maior=nota;
	} while (nota>0);
	cout << contador << endl << maior;
	return 0;
}
