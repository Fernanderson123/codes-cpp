#include <iostream>
using namespace std;
int main (){
	int vet[9];
	int i, j, cont;
	for (i=1; i<=9; i++){
		cin >> vet[i];
		for (i=1; i<=9; i++){
		cont=0;
	}	for (j=1; j<=vet[i]; i++){
			if (vet[i]%j==0)
			cont+=1;
			}
		if  (cont<=2){
				cout << vet[i] << endl;
				cout << i << endl;
			}
		}
		
	return 0;
}
