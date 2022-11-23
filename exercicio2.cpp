#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main (){
	float valor_acum, aplicacao_mensal, taxa_rend;
	int meses;
	aplicacao_mensal=100;
	taxa_rend=0.05;
	meses=12;
	ifstream arquivo ("poup.txt");
	arquivo >> aplicacao_mensal;
	arquivo >> taxa_rend;
	arquivo >> meses;
	valor_acum=aplicacao_mensal*pow(1+taxa_rend, meses)/taxa_rend;
	arquivo >> valor_acum;
	arquivo.close();
	cout << valor_acum;

	return 0;
}
