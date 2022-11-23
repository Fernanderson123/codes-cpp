#include <iostream>
using namespace std;
int main (){
	int tipo;
	float valor;
	cin >> tipo;
	if (tipo==1){
		cin >> valor;
		valor*=5/100+valor;
		cout << valor;
	}	else if (tipo==2){
		cin >> valor;
		cout << valor*3/100+valor-30;
	}
	
	return 0;
}
