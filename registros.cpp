#include<iostream>
using namespace std;
struct reg1{
	string nome;
	int numMat;
};
int main(){
	int numElem,elem;
	cin >> numElem;
	reg1 dados[numElem];
	for (int i=0;i<numElem;i++){
    cin>>dados[i].numMat>>dados[i].nome;
  }
	cin >> elem;
	int posi=0;
	int posInic=0;
	int posFin=numElem - 1;
	int meio;
	while (posInic<=posFin) {
		meio = (posInic+posFin)/2;
	if (elem == dados[meio].numMat){
		posi = meio;
		posInic = posFin+1; 
		}else{ 
	if (elem>dados[meio].numMat){
		posInic = meio+1;
		} 
	else {
		posFin = meio-1;
	}
	}
		cout << dados[meio].numMat<< endl;
	}	  
	if (dados[posi].numMat==elem){
		cout<<dados[posi].nome;
}
  return 0;
}
