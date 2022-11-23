#include <iostream>
using namespace std;
int main (){
	int venda;
	float preco_atual, preco_final=0;
	cin >> venda;
	cin >> preco_atual;
		
	if (venda<500 and preco_atual<30){
	preco_final=preco_atual*1.1;
	cout << preco_final;	
	}
	else if ((venda>=500 and venda<1200) or (preco_atual<=30 and preco_atual<80)){
		preco_final=preco_atual*1.15;
		cout << preco_final;
	}
		else if (venda>=1200 and preco_atual>=80){
		preco_final=preco_atual-preco_atual*20/100;
		cout << preco_final;
	}
	
		
		
		
	
	
	return 0;
}
