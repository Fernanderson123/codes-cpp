#include <iostream>
using namespace std;
int main (){
	char carac;
	int contA=0, contB=0;
	int cont=0;
	while (cont<=9){
		cin >> carac;
		cont++;
		if (carac=='a'){
			contA++;
		}	else if (carac=='b'){
			contB++;
		}
		}if (contA<contB){
			cout << "1" << endl;
		}	else {
			cout << "0" << endl;
		}
	
	return 0;
}
