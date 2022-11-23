#include<iostream>
#include <string>
using namespace std;
int main(){
	int tam;
	cin>>tam;
	string vet[tam];
	for(int i=0;i<tam;i++){
      cin>>vet[i];
	}
	const int UMPRIMO = 37;
	const int M = 15;
	long hash;
	int somaHash=0;  
	for(int i=0;i<tam;i++){
	hash=0;
	for (unsigned j=0;j<vet[i].size();j++){
		hash = (UMPRIMO*hash+vet[i][j])%M;
		}
		cout<<hash<<" ";
		somaHash+=hash;
		}
		cout<<somaHash;
  return 0;
}
