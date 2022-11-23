#include <iostream>
using namespace std;
int main (){
	float salario, imposto, gratif, salario_final;
	int tempo;
	cin >> salario;
	cin >> tempo;
	
	if (salario<200)
		imposto=0;
	if (salario>=200 and salario<=400)
		imposto=salario*0.03;
	if (salario>450 and salario<700)
		imposto=salario*0.08;
	if (salario>=700)
		imposto=salario*0.12;
	
	if (salario>500){
		if (tempo<3)
		gratif=20;
		if (tempo>3)
		gratif=30;
	}
	else if (salario<500){
		if (tempo<3)
		gratif=23;
		if (tempo>=3 and tempo<=6)
		gratif=35;
		if (tempo>6)
		gratif=33;
	}
	salario_final=salario-imposto+gratif;
	cout << salario_final;	

	return 0;
}
