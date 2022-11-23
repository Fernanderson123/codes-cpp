#include <iostream>
using namespace std;
int main (){
	float num1, num2; int escolha;
	float diferenca;
	cin >> escolha;
	cin >> num1 >> num2;
	if (escolha==1)
		cout << (num1+num2)/2;
	if (escolha==2)
		if (num1>num2){
		diferenca=num1-num2;
		cout << diferenca;
	}
	if (escolha==3)
		cout << num1*num2;
	if (escolha==4)
		cout << num1/num2;
	
	return 0;
}
