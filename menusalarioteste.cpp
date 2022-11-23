#include <iostream>
using namespace std;
int main (){
	float sala, imposto, aumento;
	string classificacao;
	int opcao;
	cin >> opcao;
	
	if (opcao==2){
		cin >> sala;
		
		if (sala<500){
			imposto=sala*(5/100);
		}else if (sala>=500 and sala<=800){
			imposto=sala*0.1;
			
		}else if (sala>850){
			imposto=sala*0.15;
			
		}imposto=sala;
		cout << imposto;
		}	
		
	
	return 0;
}
