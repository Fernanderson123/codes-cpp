#include <iostream>
using namespace std;
int main (){
	int k, n=10;
	int v[n];
	int i, posicao=-1;
	for (i=0;i<n;i++) cin >> v[i];
		cin >> k;
		i=0;
		while (i<n){
			if (v[i]==k){
				posicao=i;
			}	i++;
		}	cout << posicao << endl;
	return 0;
}
