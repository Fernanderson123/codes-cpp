#include <iostream>
using namespace std;
int main (){
	float salario, novo_salario;
	float bonifi, auxilio;
	cin >> salario;
	
	if (salario<=500)
		bonifi=salario*0.05;
	if (salario>500 and salario<=1200)
		bonifi=salario*0.12;
	if (salario>1200)
		bonifi=0;
		
	if (salario<=600)
		auxilio=150;
	if (salario>600)
		auxilio=100;
	novo_salario=bonifi+auxilio+salario;
	cout << novo_salario;
	
	return 0;
}
