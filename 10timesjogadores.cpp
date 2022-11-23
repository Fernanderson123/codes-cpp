#include <iostream>
using namespace std;
int main (){
	int cont_time=0, cont_jog, idade;
	float peso, alt, qtd, media_idade=0;
	float media_alt=0, porc, tot80;
	qtd=0;
	tot80=0;
	cont_time=1;
	while (cont_time<=1){
		media_idade=0;
		cont_time++;
		for (cont_jog=1;cont_jog<=4; cont_jog++){
			cin >> idade;
			cin >> peso;
			cin >> alt;
			if (idade<18)
			qtd+=1;
			media_idade+=idade;
			media_alt+=alt;
			if (peso>80)
			tot80+=1;
			media_idade=media_idade/11;
			}
			cout << qtd << endl;
			
			media_alt=media_alt/4;
			cout << media_alt << endl;
			porc=tot80*100/4;
			cout << porc << endl;
			}		
	return 0;
}
