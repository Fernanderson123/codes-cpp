#include <iostream>
using namespace std;

void dobra (int vetor[], int tam){
	int i=0;
	while (i<tam){
		vetor[i]*=2;
		++i;		
		}
	}
int main (){
	int vetor[5]={1,2,3,4,5};
	int i=0;
	while (i<5){
		cout << vetor[i] << " ";
		i++;
		}
		cout << endl;
		dobra(vetor,7);
		i=0;
		while (i<7){
		cout << vetor[i] << " ";	
		i++;
		} 
		cout << endl;

	return 0;
}
