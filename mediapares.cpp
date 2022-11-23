#include <iostream>
using namespace std;
int main (){
	int const n=10;
	int num[n];
	int i, soma;
	for (i=0;i<n;i++) cin >> num[i];
	for (i=0;i<n;i+=2) {
		soma+=num[i];
	}
	cout << "soma = " << soma << endl;
	
	

	return 0;
}
