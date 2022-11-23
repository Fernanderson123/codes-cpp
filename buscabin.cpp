#include <iostream>
using namespace std;
int main (){
	int k, n=10;
	int v[n];
	int i, posicao=-1;
	int pos_inicial=0, pos_final=-1, meio;
	for (i=0;i<n;i++) cin >> v[i];
	cin >> k;
		while (pos_inicial<=pos_final){
			meio=(pos_inicial+pos_final)/2;
			if (k==v[meio]){
				posicao=meio;
				pos_inicial=pos_final+1;
			}	else {
				if (k>v[meio])pos_inicial=meio+1;
				else pos_final=meio-1;
			}
		} cout << posicao << endl;	
	return 0;
}
